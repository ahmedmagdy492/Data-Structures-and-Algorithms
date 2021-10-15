var KeyValuePair = /** @class */ (function () {
    function KeyValuePair(key, value) {
        this.key = key;
        this.value = value;
    }
    KeyValuePair.prototype.getKey = function () {
        return this.key;
    };
    KeyValuePair.prototype.getValue = function () {
        return this.value;
    };
    KeyValuePair.prototype.setValue = function (value) {
        this.value = value;
    };
    KeyValuePair.prototype.setKey = function (key) {
        this.key = key;
    };
    return KeyValuePair;
}());
var HashTable = /** @class */ (function () {
    function HashTable() {
        this.arr = [];
    }
    HashTable.prototype.hash = function (key) {
        var index = key.length / this.arr.length;
        console.log(index);
        return index;
    };
    HashTable.prototype.lookup_item = function (key) {
        var index = this.hash(key);
        return this.arr[index];
    };
    HashTable.prototype.addItem = function (key, value) {
        var foundItem = this.lookup_item(key);
        console.log(key, foundItem);
        if (foundItem == undefined) {
            this.arr.push(new KeyValuePair(key, value));
        }
    };
    HashTable.prototype.print = function () {
        for (var _i = 0, _a = this.arr; _i < _a.length; _i++) {
            var item = _a[_i];
            console.log(item.getValue());
        }
    };
    return HashTable;
}());
var items = new HashTable();
items.addItem('apple', 12);
items.addItem('milk', 3.4);
items.print();
