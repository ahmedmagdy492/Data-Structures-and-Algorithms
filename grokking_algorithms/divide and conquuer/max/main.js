function get_max(arr, max = 0)
{
	if(arr.length == 0)
	{
		return max;
	}
	let ele = arr.pop();
	if(ele > max)
	{
		max = ele;
	}
	return get_max(arr, max);
}

let arr = [34, 155, 55, 12, 90];
let result = get_max(arr);
console.log(result);
