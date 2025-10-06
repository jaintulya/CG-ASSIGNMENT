var std1=90;
var std2=90;
var std3=80;
var std4=88;
var std5=95;
var sum=std1+std2+std3+std4+std5;
console.log("Total marks is ",sum);
var percentage=(sum/500)*100;
console.log("Percentage is",percentage);
if(percentage>=90){
    console.log("Grade A");
} else 
    if(percentage>=80 && percentage<=89){
    console.log("Grade B");
} else 
     if(percentage>=70 && percentage<=79){
    console.log("Grade C");
} else 
     if(percentage>=60 && percentage<=69){
    console.log("Grade D");
} else {
      console.log("Fail");
}
     


