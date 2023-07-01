crib = prompt().trim();
armada = prompt().trim();
var pos = 0;

armadalength=armada.length;

for(var i=0; i<crib.length-armadalength; i++){
  if(i>0){
  armada = " " + armada;
  }

  pos++;


  for(var j=0; j<crib.length; j++){
  if(armada[j]==crib[j] && armada[j] != " "){
      pos--;
      break;
  }
}


}



console.log(pos);