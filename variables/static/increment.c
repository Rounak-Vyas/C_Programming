int increment (){
    static int count;
    count = count+1;
    return count;
}
// will generate an output => =3 

// int increment (){
//     int count;
//     count = count+1;
//     return count;
//  will generate an output => =1