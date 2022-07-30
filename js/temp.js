const book={
    title:'book 1',
    author:"russo",
    year:"2013",
    fuck:function(){
        return `${this.title} was written by ${this.author} in ${this.year}` 
    }
}
const book2={
    title:'book 2',
    author:"lord of the rings",
    year:"2017",
    fuck:function(){
        return `${this.title} was written by ${this.author} in ${this.year}` 
    }
}
console.log(book.fuck());
console.log(book2.fuck());
