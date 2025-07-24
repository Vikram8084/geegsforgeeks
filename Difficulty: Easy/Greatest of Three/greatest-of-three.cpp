// User function Template for C++

int find_greatest_number(int a, int b, int c) {
    // Write  your code here..
    // if( a >= b && a >=c){
    //     return c;
    // }
    // else if(b >= a && b >= c){
    //     return b;
    // }
    // else{
    //     return c;
    // }
    
    return max({a, b, c});
}