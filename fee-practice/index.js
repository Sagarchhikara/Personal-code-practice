// document.getElementById("count-el").innerText = 5
// let count = 0;
// console.log(myage)
// console.log(count)
// let myage = 20
// countdown()
// function countdown(){
//     console.log(5)
//     console.log(4)
//     console.log(3)
//     console.log(2)
//     console.log(1)
// }
// countdown()

// function myfunction(){
//     console.log(42)
// }
// myfunction()

// let lap1=34
// let lap2=33
// let lap3 =36

// function laplos(){
//     let  sumlaps=lap1+lap2+lap3
//     console.log(sumlaps)
// }
// laplos()

// let lapscompleted=0
// function incrementlaps(){
//     lapscompleted=lapscompleted+1
// }
// incrementlaps()
// incrementlaps()
// let countEl=document.getElementById("count-el")
// console.log(countEl)
// let count=0;
// let saveEl=document.getElementById("save-el")
//  function increment(){
//     count+=1
//     countEl.innerText=count
//  }
//  function save(){
//     let countStr=count + "-"
//     saveEl.textContent +=countStr
//     countEl.textContent=0
//     count=0
 
//  }


// firstName="Sagar"
// lastName="Chhikara"
// fullName=firstName+lastName
// console.log(fullName)

// let name="Sagar"
// let greeting="Hi there"

// function greting(){
//     let fullgreetung=greeting+","+name+"!"
//     console.log(fullgreetung)
// }
// greting()

// let points=3

// function add3points(){
//    points+=3
// }
// function remove1point(){
//    points-=1
// }

// add3points()
// add3points()
// add3points()
// remove1point()
// remove1point()
// console.log(points)

// let errorMsg=document.getElementById("error")

// function showerror(){
//    errorMsg.textContent="Something went wrong please try again"
// }

let firstCard= 9
let secondCard=12
let sum=firstCard+secondCard

let hasblackjack=false

if(sum<21){
   console.log("Do you want to draw a new card")
}
else if(sum===21){
   console.log("You have got blcakjack")
   hasblackjack=true
}
else {
   console.log("You are out of the game")
}
console.log(hasblackjack)