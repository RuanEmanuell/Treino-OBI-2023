var vog = 0;
var vogtrue = false;
var pos = true;
var vogcheck="";

ris = prompt();


for (var i = 0; i < ris.length; i++) {
  if (ris[i] == "a" || ris[i] == "e" ||
    ris[i] == "i" || ris[i] == "o" ||
    ris[i] == "u"
  ) {
    vog++;
    vogtrue = true;
  }else{
    vogtrue=false;
  }

  if (vogtrue) {
    vogcheck += ris[i];
  }
}

var vogsplit=vogcheck.split('');
var vogreverse=vogsplit.reverse();
var result=vogreverse.join('');

if(result!=vogcheck){
  pos = false;
}

if(pos){
  console.log("S");
}else{
  console.log("N");
}