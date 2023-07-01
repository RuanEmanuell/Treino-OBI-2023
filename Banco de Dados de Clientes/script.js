var N = 0;
var emails = [];
var emailsCheck=[];
var pos = 1;

N = prompt();

for(var i =0; i<N; i++){
  emails[i] = prompt();
}


for(var i = 0; i<N; i++){
  for(var j=0; j<emails[i].length; j++){
    if(emails[i][j]=='@'){
      break;
    }else{
      if(emails[i][j]=='+'){
        var temp = emails[i].substring(emails[i].indexOf('@'));
        var temp2 = emails[i].substring(0, emails[i].indexOf('+'));
        emails[i]= temp2+temp;
        break;
      }
      if(emails[i][j]=='.'){
        var temp = emails[i].replace('.', '');
        emails[i] = temp;
      }
    }
  }
  if(emailsCheck.includes(emails[i])==false){
    emailsCheck.push(emails[i]);
  }
}

console.log(emailsCheck.length);