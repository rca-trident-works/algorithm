package main

import "fmt"

const N = 6

func main() {
	a := [N]int{72, 24, 46, 38, 53, 65}
	var i, j, w, ctl, ct2 int

	ctl = 0 // comparison count
	ct2 = 0 // swap count

	fmt.Println("Initial array:")
	printArray(a[:])
	fmt.Println()

	for i = N - 1; i > 0; i-- {
		for j = 0; j < i; j++ {
			ctl++
			if a[j] > a[j+1] {
				ct2++
				w = a[j]
				a[j] = a[j+1]
				a[j+1] = w
			}
			printStep(i, j, ctl, a[:])
		}
	}

	fmt.Println("\nFinal sorted array:")
	printArray(a[:])
	fmt.Println()

	fmt.Printf("比較回数:%d 交換回数:%d\n", ctl, ct2)
}

func printArray(arr []int) {
	for _, v := range arr {
		fmt.Printf("%4d", v)
	}
	fmt.Println()
}

func printStep(i, j, ctl int, arr []int) {
	fmt.Printf("i=%d j=%d 比較回数=%d: ", i, j, ctl)
	printArray(arr)
}
