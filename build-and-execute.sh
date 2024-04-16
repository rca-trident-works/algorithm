#!/opt/homebrew/bin/bash

# 授業用いろいろスクリプト

# ENV
IS_DEBUG="true"
INPUT_PREFIX="cwork/"
OUTPUT_PREFIX="opt/"

function logger {
    if [[ -v IS_DEBUG ]]; then
        if [ "${IS_DEBUG}" = "false" ]; then
                exit
        fi
    fi

    head=""
    case $1 in
        "err_c")
                head="\e[41m ERROR \e[00m";;
        "err")
                head="\e[31m ERROR \e[00m";;
        "warn")
                head="\e[33m WARN  \e[00m";;
        "info")
                head="\e[34m INFO  \e[00m";;
        "succ")
                head="\e[32m SUCC  \e[00m";;
        "wait")
                head="\e[36m WAIT  \e[00m";;
        *)
            head="$1";;
    esac

    if [[ "$3" = "true" ]]; then
        printf "${head} : ${2}"
        return
    fi
    printf "${head} : ${2}\n"
}

function __get_input_name {
    if [ -v $1 ]; then
        return 1
    fi
    # 拡張子がない場合は.cを付ける
    if [[ $1 != *.* ]]; then
        echo "${INPUT_PREFIX}${1}.c"
    else
        echo ${INPUT_PREFIX}$1
    fi
}

function __get_dist_name {
    if [ -v $1 ]; then
        return 1
    fi
    echo "${INPUT_PREFIX}${OUTPUT_PREFIX}$1"
}

function _check_file {
    if [ -v $1 ]; then
        return 1
    fi
    if [ ! -e $(__get_input_name $1) ]; then
        logger err_c "file not found: $(__get_input_name $1)"
        return 1
    fi
}

function _build {
    if [ -v $1 ]; then
        return 1
    fi
    gcc -o $(__get_dist_name $1) $(__get_input_name $1)
}

function _execute {
    if [ -v $1 ]; then
        return 1
    fi
    $(__get_dist_name $1)
}

# Logic

# greeting

logger info "Target file: $(__get_input_name $1)"
logger info "Output file: $(__get_dist_name $1)"

logger info "Checking..."
# check file exists
_check_file $1
logger succ "file exists."

logger info "building..."
_build $1
logger succ "build complete."
logger info "Executing..."
_execute $1
