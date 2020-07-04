// Link: https://codeforces.com/problemset/problem/492/B

package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, l int
	fmt.Scan(&n)
	fmt.Scan(&l)
	var a = make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	sort.Ints(a)
	var minRadius float64 = float64(a[0] - 0)
	for i := 0; i < n-1; i++ {
		currRadius := float64(a[i+1]-a[i]) / 2.
		if minRadius < currRadius {
			minRadius = currRadius
		}
	}
	if minRadius < float64(l-a[n-1]) {
		minRadius = float64(l - a[n-1])
	}
	fmt.Printf("%.9f\n", minRadius)
}
