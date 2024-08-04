
// WAP to show difference between Structure and Union. 
 
 #include <stdio.h>


struct MyStruct {
    int x;
    float y;
};


union MyUnion {
    int x;
    float y;
};

int main() {
    
    struct MyStruct myStruct;
    union MyUnion myUnion;

    
    myStruct.x = 10;
    myStruct.y = 20.5;

    
    myUnion.x = 10;
    myUnion.y = 20.5;

    
    printf("Structure: x = %d, y = %f\n", myStruct.x, myStruct.y);
    printf("Union: x = %d, y = %f\n", myUnion.x, myUnion.y);

    return 0;
}
