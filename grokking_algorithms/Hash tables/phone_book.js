class PhoneBook
{
  constructor()
  {
    this.arr = {};
  }

  add_person(person)
  {
    this.arr[person.name] = person.number;
  }

  lookup_person(name)
  {
    return this.arr[name];
  }
}

let john = {
  name: 'John Doe',
  number: '0123429320'
}
let mark = {
  name: 'Mark',
  number: '45678956'
}

let phoneBook = new PhoneBook();
phoneBook.add_person(john);
phoneBook.add_person(mark);

console.log(phoneBook.lookup_person('Mark'));
