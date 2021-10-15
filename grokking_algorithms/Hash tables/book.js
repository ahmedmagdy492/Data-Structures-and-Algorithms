class Book
{
  constructor()
  {
    this.arr = [];
  }

  add_item(item)
  {
    this.arr.push(item);
  }

  lookup_item(name)
  {
    for(let i = 0; i < this.arr.length; i++)
    {
      if(this.arr[i].name === name)
      {
        return this.arr[i].price;
      }
    }
  }
}

let book = new Book();
book.add_item({name: 'Apple', price: 12});
book.add_item({name: 'milk', price: 34});

let milk = book.lookup_item('milk');
console.log(milk);
