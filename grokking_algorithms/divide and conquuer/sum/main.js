function sum(arr)
{
	if(arr.length == 0)
	{
		return 0;
	}
	else if(arr.length == 1)
	{
		return arr[0];
	}

	return arr.pop() + sum(arr);
}

let arr = [1, 2, 3, 4];
let result = sum(arr);
console.log(result);
