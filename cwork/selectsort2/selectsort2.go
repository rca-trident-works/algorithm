package main

import "fmt"

const N = 6

func main() {
	a := [N]int{53, 65, 46, 38, 72, 24}
	var i, j, w, ctl, ct2, m int

	ctl = 0 // comparison count
	ct2 = 0 // swap count

	fmt.Println("Initial array:")
	printArray(a[:])
	fmt.Println()

	for i = 0; i < N-1; i++ {
		m = i
		for j = i + 1; j < N; j++ {
			ctl++
			if a[j] < a[m] {
				m = j
			}
		}
		if m != i {
			ct2++
			w = a[i]
			a[i] = a[m]
			a[m] = w
		}
		printStep(i, j, m, a[:])
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

func printStep(i, j, m int, arr []int) {
	fmt.Printf("i=%d j=%d m=%d: ", i, j, m)
	printArray(arr)
}
