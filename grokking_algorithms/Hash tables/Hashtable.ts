class KeyValuePair
{
    private key: string;
    private value: number;

    constructor(key: string, value: number)
    {
        this.key = key;
        this.value = value;
    }

    getKey()
    {
        return this.key;
    }

    getValue()
    {
        return this.value;
    }

    setValue(value)
    {
        this.value = value;
    }

    setKey(key)
    {
        this.key = key;
    }
}

class HashTable
{
    private arr: KeyValuePair[];

    constructor()
    {
        this.arr = [];
    }

    hash(key: string)
    {
        let index = key.length / this.arr.length;
        return index;
    }

    lookup_item(key: string)
    {
        let index = this.hash(key);
        return this.arr[index];
    }

    addItem(key: string, value: number)
    {
        let foundItem = this.lookup_item(key);
        if(foundItem == undefined)
        {
            this.arr.push(new KeyValuePair(key, value));
        }
    }

    print()
    {
        for(let item of this.arr)
        {
            console.log(item.getValue());
        }
    }
}

let items = new HashTable();
items.addItem('apple', 12);
items.addItem('milk', 3.4);

items.print();