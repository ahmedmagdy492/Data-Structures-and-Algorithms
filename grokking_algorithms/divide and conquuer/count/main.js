function count(arr)
{
	let total = 0;
	if(arr.length == 0)
	{
		return total;
	}

	arr.pop();
	total++;
	return total + count(arr);
}

let arr = [1, 2, 3, 4, 54, 56];
let result = count(arr);
console.log(result);
