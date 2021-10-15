function get_larger_numbers(arr, pivot)	{
	let newArr = [];

	for(let i = 0; i < arr.length; i++) {
		if(arr[i] > pivot) {
			newArr.push(arr[i]);
		}
	}

	return newArr;
}

function get_smaller_numbers(arr, pivot) {
	let newArr = [];

	for(let i = 0; i < arr.length; i++) {
		if(arr[i] < pivot) {
			newArr.push(arr[i]);
		}
	}
	return newArr;
}

function combine(smaller_numbers, pivot, larger_numbers) {
	let newArr = [];

	for(let i = 0; i < smaller_numbers.length; i++) {
		newArr.push(smaller_numbers[i]);
	}

	newArr.push(pivot);

	for(let i = 0; i < larger_numbers.length; i++) {
		newArr.push(larger_numbers[i]);
	}

	return newArr;
}

function quick_sort(arr) {
	// base case
	if(arr.length < 2) {
		return arr;
	}
	if(arr.length == 2) {
		if(arr[0] > arr[1])
		{
			let temp = arr[0];
			arr[0] = arr[1];
			arr[1] = temp;
		}
		return arr;
	}

	// pick a number and mark it as the pivot
	let pivot = arr[0];

	// partition the array o(n)
	let smaller_numbers = get_smaller_numbers(arr, pivot);
	let larger_numbers = get_larger_numbers(arr, pivot);

	// sort sub arrays recursively
	smaller_numbers = quick_sort(smaller_numbers);
	larger_numbers = quick_sort(larger_numbers);

	// combine the result
	return combine(smaller_numbers, pivot, larger_numbers);
}

let arr = [34, 19, 22, 11, 7];
console.log(quick_sort(arr));

/*

*/
