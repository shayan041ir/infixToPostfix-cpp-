/*
// sakhtar code 
//bayad hatman try va catch bashe
try {
    //code hamun ro ke ehtemal error daran dar try

    console.log("start of try");

    //be khater in tabe error mide  va mire be samt [console.log("error is "+error);]
    cncl();
    console.log("end of my try....");

} catch (error) {
    //mesl else has ke aga balayi nashod in 
    
    console.log("error is "+error);

}finally{
    //hamishe ejra mishe

    console.log("finly allways run");

}
*/

// mesal digar

//etelaat migirim az noe json

let json = '{"age" : 30}';  //tarif mikonim ba farz ersali server 

try {

    //in noe dade json ra be yek obj js tabdil mikone
    let user = JSON.parse(json);
    console.log(user);
    if (!user.name) {
        //string error ma/modiriyat error
        // throw"the json data is an";                  //1
        
        //mitavanim be in shekl ham benevisim behtare
        // throw new Error("the json data is an");         //2

        throw new SyntaxError("the json data is an");       //3

    }
    
} catch (error) {
    

    // console.log("json error "+error);    1
    // console.log(error);      2
    console.log(error);     //3

}




















