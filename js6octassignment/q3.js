var income=100000;

if(income<=250000){
    console.log("Non Tax payable");
} 
else  if(income>=250001 && income<=500000){
   console.log("Tax payable",(income*5)/100);}
else  if(income>=500001 && income<=1000000){
   console.log("Tax payable",(income*20)/100);}
else  if(income>1000000){
   console.log("Tax payable",(income*30)/100);}


     


