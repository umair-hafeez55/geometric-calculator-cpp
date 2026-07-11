#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes for 2D and 3D shape drawings
void drawCircle();
void drawSquare();
void drawTriangle();
void drawRectangle();
void drawParallelogram();
void drawTrapezoid();
void drawHexagon();

void drawSphere();
void drawCube();
void drawCylinder();
void drawCone();
void drawCuboid();
void drawPyramid();
void drawPrism();


const double PI = 3.141592653589793;

// Function to calculate 2D circle properties

void calculateCircleProperties() {
    double radius,rad;
   // system("CLS");
    cout<<"\t\t\t\t\t------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Circle     -";
    cout<<"\n\t\t\t\t\t------------------------------\n";    
    cout<<" \n\t\t\t\t\tChoose a calculation:\n";
	cout<<" \n\t\t\t\t\t1. Area";
	cout<<" \n\t\t\t\t\t2. Circumference";
	cout<<" \n\n\t\t\t\t\tEnter your choice: ";
    int calculationChoice;
    cin >> calculationChoice;

    if (calculationChoice == 1) {
    cout<<"\n\t\t\t\t\tEnter the radius of the circle: ";
    cin>> radius;

        double area = PI * pow(radius, 2);
    cout<<"\n\t\t\t\t\tThe area of the circle is: " << area << " (m^2) "<<endl<< endl;
    
    } else if (calculationChoice == 2) {
    cout<< "\n\t\t\t\t\tEnter the radius of the circle: ";
    cin>>rad;

        double circumference = 2 * PI * rad;
        cout<<endl;
    cout<<"\t\t\t\t\tThe circumference of the circle is: " << circumference << " (m) " << endl;
    } else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 2D square properties

void calculateSquareProperties() {
    double side;
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Square       -";
    cout<<"\n\t\t\t\t\t--------------------------------";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Area";
	cout<< "\n\n\t\t\t\t\t2. Perimeter";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int calculationChoice;
    cin >> calculationChoice;

    if (calculationChoice == 1) {
        cout << "\n\t\t\t\t\tEnter the side length of  square:  ";
        cin >> side;
        double area = pow(side, 2);
        

        cout << "\n\t\t\t\t\tThe area of the square is: " << area << "(m^2)" << endl;
    } else if (calculationChoice == 2) {
    	cout<<endl;
    	cout << "\t\t\t\t\tEnter the side length of  square: ";
        cin >> side;
    	
        double perimeter = 4 * side;
        cout<<"\n\t\t\t\t\tThe perimeter of the square is: "<< perimeter << "(m)" << endl;
    } else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 2D triangle properties

void calculateTriangleProperties() {
	double side;
//	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Triangle    -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Area";
	cout<< "\n\n\t\t\t\t\t2. Perimeter";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int Choice;
    cin>>Choice;
    if(Choice==1){
    double base, height;
    cout << "\n\t\t\t\t\tEnter the base length of the triangle: ";
    cin >> base;
    cout << "\n\t\t\t\t\tEnter the height of the triangle: ";
    cin >> height;
 
    double area = 0.5 * base * height;
    cout << "\n\t\t\t\t\tThe area of the triangle is: "<< area << " (m^2) "<< endl;
}
if(Choice==2){
    double a,b,c;
    cout<<"\n\t\t\t\t\tEnter the side  1 of  triangle: ";
    cin>>a;
    cout<< "\n\t\t\t\t\tEnter the side  2 of  triangle: ";
    cin>>b;
    cout<< "\n\t\t\t\t\tEnter the side  3 of  triangle: ";
    cin>>c;
 
    double peremeter = a+b+c;
    cout << "\n\t\t\t\t\tThe Peremeter of the triangle is: "<< peremeter << " (m) "  << endl;
}else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 2D rectangle properties

void calculateRectangleProperties() {
 //   system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Rectangle    -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Area";
	cout<< "\n\n\t\t\t\t\t2. Perimeter";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int Choice;
    cin>>Choice;
    if(Choice==1){
    double length, width;
    cout << "\n\t\t\t\t\tEnter the  length of the Rectangle: ";
    cin >> length;
    cout << "\n\t\t\t\t\tEnter the   width of the Rectangle: ";
    cin >> width;
 
    double area = length*width;
    cout << "\n\t\t\t\t\tThe area of the Rectangle is: "<< area << " (m^2) " << endl;
}
if(Choice==2){
    double length, width;
    cout << "\n\t\t\t\t\tEnter the  length of the Rectangle: ";
    cin >> length;
    cout << "\n\t\t\t\t\tEnter the   width of the Rectangle: ";
    cin >> width;
 
    double peremeter = 2*(length+width);
    cout << "\n\t\t\t\t\tThe Peremeter of the Rectangle is: "<< peremeter << " (m) "  << endl;
}else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 2D parallelogram properties

void calculateParallelogramProperties() {
//    system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Parallelogram    -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Area";
	cout<< "\n\n\t\t\t\t\t2. Perimeter";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int Choice;
    cin>>Choice;
    if(Choice==1){
    double base  , height;
    cout << "\n\t\t\t\t\tEnter the  Base of the Parallelogram: ";
    cin >> base ;
    cout << "\n\t\t\t\t\tEnter the  height of the Parallelogram: ";
    cin >> height;
 
    double area = base*height;
    cout << "\n\t\t\t\t\tThe area of the Parallelogram is: "<< area << " (m^2) " << endl;
}
if(Choice==2){
    double base, side;
    cout << "\n\t\t\t\t\tEnter the  Base of the Parallelogram: ";
    cin >> base;
    cout << "\n\t\t\t\t\tEnter the  Side of the Parallelogram: ";
    cin >> side;
 
    double peremeter = 2*(base+side);
    cout << "\n\t\t\t\t\tThe Peremeter of the Parallelogram is: "<< peremeter << "(m)" << endl;
}else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 2D Trapezoid properties

void calculateTrapezoidProperties() {
 //system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Trapzoid   -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Area";
	cout<< "\n\n\t\t\t\t\t2. Perimeter";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int Choice;
    cin>>Choice;
    if(Choice==1){
    double base1,base2,height;
    cout << "\n\t\t\t\t\tEnter the  Base 1 of the Trapzoiod : ";
    cin >> base1 ;
    cout << "\n\t\t\t\t\tEnter the  Base 2 of the Trapezoid  : ";
    cin >> base2;
    cout << "\n\t\t\t\t\tEnter the  Height of the Trapezoid  : ";
    cin >> height;
     
    double area = 0.5*(base1+base2)*height;
    cout << "\n\t\t\t\t\tThe Area of the Trapezoid is: "<< area << "(m^2)" << endl;
}
if(Choice==2){
    double a,b,c,d;
    cout<< "\n\t\t\t\t\tEnter the  Value  of the side  1  : ";
    cin>>a;
    cout<< "\n\t\t\t\t\tEnter the  Value  of the side 2  : ";
    cin>>b;
    cout<< "\n\t\t\t\t\tEnter the  Value  of the side 3  : ";
    cin>>c;
    cout<< "\n\t\t\t\t\tEnter the  Value  of the side 4  : ";
    cin>>d;
    
 
    double peremeter =(a+b+c+d);
    cout << "\n\t\t\t\t\tThe Peremeter of the Trapezoid is: "<< peremeter << "(m)" << endl;
}else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }   
}

// Function to calculate 2D hexagon properties

void calculateHexagonProperties() {
//	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Hexagon      -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Area";
	cout<< "\n\n\t\t\t\t\t2. Perimeter";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int Choice;
    cout<<" ";cin>>Choice;
    if(Choice==1){
    double side;
    cout << "\n\t\t\t\t\tEnter the side length of the Hexagon  : ";
    cin >> side;

    double area = (3 * sqrt(3) / 2) * pow(side, 2);
    cout << "\n\t\t\t\t\tThe area of the Hexagon is  : "<< "(m^2)" << area << endl;
}
if(Choice==2){
    double side;
    cout << "\n\t\t\t\t\tEnter the side length of the Hexagon  : ";
    cin >> side;
 
    double peremeter =6*side;
    cout << "\n\t\t\t\t\tThe Peremeter of the Hexagon is: "<< "(m)" << peremeter << endl;
}else {
        cout<<"\t\t\t\t\tInvalid choice!" << endl;
    }   
}
//                       3D   SHAPES         //

// Function to calculate 3D sphere properties

void calculateSphereProperties() {
//	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Sphere       -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    
    int calculationChoice;
    cin >> calculationChoice;

    if (calculationChoice == 1) {
    	double radius; 
    cout << "\n\t\t\t\t\tEnter the radius of the sphere: ";
    cin >> radius;
    
        double surfaceArea = 4 * PI * pow(radius, 2);
        cout << "\n\t\t\t\t\tThe surface area of the sphere is: " <<surfaceArea << " (m^2) " <<endl;
        
    } else if (calculationChoice == 2) {
    	double radius; 
        cout << "\n\t\t\t\t\tEnter the radius of the sphere: ";
        cin >> radius;
        double volume = (4 / 3) * PI * pow(radius, 3);
        cout << "\n\t\t\t\t\tThe volume of the sphere is: "<< " (m^3) " << volume << endl;
    } else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 3D cube properties

void calculateCubeProperties() {
//	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Cube         -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    
    int calculationChoice;
    cout<<" ";cin >> calculationChoice;

    if (calculationChoice == 1) {
    	double side;
    cout << "\n\t\t\t\t\tEnter the side length of the cube: ";
    cin >> side;
    
        double surfaceArea = 6 * pow(side, 2);
        cout << "\n\t\t\t\t\tThe surface area of the Cube is: " <<surfaceArea << " (m^2) "<<endl;
        
    } else if (calculationChoice == 2) {
    	double si;
    cout << "\n\t\t\t\t\tEnter the side length of the cube: ";
         cin >> si;

    double volume = pow(si, 3);
        cout << "\n\t\t\t\t\tThe volume of the Cube is: " << volume << " (m^2) " << endl;
    } else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}

// Function to calculate 3D cylinder properties

void calculateCylinderProperties() {
//	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Cylinder      -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
    int calculationChoice;
    cout<<" ";cin >> calculationChoice;

    if (calculationChoice == 1) {
    double radius, height;
    cout << "\n\t\t\t\t\tEnter the radius of the cylinder: ";
    cin >> radius;

    cout << "\n\t\t\t\t\tEnter the height of the cylinder: ";
    cin >> height;

    double surfaceArea = 2 * PI * radius * height + 2 * PI * pow(radius,2);
    cout << "\n\t\t\t\t\tThe surface area of the cylinder is: "<<surfaceArea << " (m^2) " <<endl;
    
}else  if(calculationChoice == 2)
{
    double radius, height;
    cout << "\n\t\t\t\t\tEnter the radius of the cylinder : ";
    cin >> radius;

    cout<<"\n\t\t\t\t\tEnter the height of the cylinder: ";
    cin>> height;
    double volume = PI * pow(radius, 2) * height;

    cout<<"\n\t\t\t\t\tThe volume of the cylinder is: " << volume << " (m^3) " << endl;
} else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}
// Function to calculate 3D cone properties
void calculateConeProperties() {
//	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Cone      -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
	
    int calculationChoice;
    cout<<" ";cin >> calculationChoice;
    
    if (calculationChoice == 1) {
    	
    double radius, height;
    cout<<"\n\t\t\t\t\tEnter the radius of the cone: ";
    cin>>radius;

    cout <<"\n\t\t\t\t\tEnter the height of the cone: ";
    cin >> height;
    
    double surfaceArea = PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
    cout<<"\n\t\t\t\t\tThe surface area of the cone is: " << surfaceArea << " (m^2) "<< endl;
}
   else  if (calculationChoice == 2) {
    	
    	double radius, height;
    cout<< "\n\t\t\t\t\tEnter the radius of the cone: ";
        cin>>radius;

    cout<<"\n\t\t\t\t\tEnter the height of the cone: ";
        cin>>height;
    
    double volume = (1.0 / 3.0) * PI * pow(radius, 2) * height;
        cout<<"\n\t\t\t\t\tThe volume of the cone is: "<<volume << " (m^3) "<< endl;
}else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}
    // Function to calculate 3D cuboid properties
    
    void calculateCuboidProperties() {
   // 	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Cuboid      -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
	
    int calculationChoice;
    cout<<" ";cin >> calculationChoice;
    
    if (calculationChoice == 1) {
    	
    double length, width, height;


    cout<<"\n\t\t\t\t\tEnter the length of the cuboid: ";
    cin>>length;

    cout<<"\n\t\t\t\t\tEnter the width of the cuboid: ";
    cin>>width;

    cout<<"\n\t\t\t\t\tEnter the height of the cuboid: ";
    cin>>height;

    // Calculate the surface area using the formula A = 2(lw + lh + wh)
    double surfaceArea = 2 * (length * width + length * height + width * height);

    // Display the result
    cout<<"\n\t\t\t\t\tThe surface area of the cuboid is: " << surfaceArea << " (m^2) " << endl;
}
   else  if (calculationChoice == 2) {
    	
    	 double length, width, height;

    // Get input for length, width, and height from the user
    cout<<"\n\t\t\t\t\tEnter the length of the cuboid: ";
    cin>>length;

    cout<<"\n\t\t\t\t\tEnter the width of the cuboid: ";
    cin>>width;

    cout<<"\n\t\t\t\t\tEnter the height of the cuboid: ";
    cin>>height;

    // Calculate the volume using the formula V = lwh
    double volume = length * width * height;

    // Display the result
    cout << "\n\t\t\t\t\tThe volume of the cuboid is: " << volume << " (m^3) "<< endl;

} else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}
   // Function to calculate 3D Pyramid properties
   
   void calculatePyramidProperties() {
    //	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Pyramid      -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
	
    int calculationChoice;
    cout<<" ";cin >> calculationChoice;
    
    if (calculationChoice == 1) {
    	double baseArea, perimeter, slantHeight;

    // Get input for base area, perimeter, and slant height from the user
    cout << "\n\t\t\t\t\tEnter the area of the base: ";
    cin >> baseArea;

    cout << "\n\t\t\t\t\tEnter the perimeter of the base: ";
    cin >> perimeter;

    cout << "\n\t\t\t\t\tEnter the slant height of the pyramid: ";
    cin >> slantHeight;

    // Calculate the surface area using the formula A = B + 0.5Pl
    double surfaceArea = baseArea + 0.5 * perimeter * slantHeight;

    // Display the result
    cout << "\n\t\t\t\t\tThe surface area of the pyramid is: " << surfaceArea << " (m^2) "<< endl;
}
      else  if (calculationChoice == 2) {
    	 
 double baseLength, baseWidth, height;

    // Get input for base length, base width, and height from the user
    cout << "\n\t\t\t\t\tEnter the length of the base: ";
    cin >> baseLength;

    cout<<"\n\t\t\t\t\tEnter the width of the base: ";
    cin>>baseWidth;

    cout<<"\n\t\t\t\t\tEnter the height of the pyramid: ";
    cin>>height;

    // Calculate the area of the base
    double baseArea = baseLength * baseWidth;

    // Calculate the volume using the formula V = (1/3) * Bh
    double volume = (1.0 / 3.0) * baseArea * height;
   // Display the result
    cout<<"\n\t\t\t\t\tThe volume of the pyramid is: " << volume << " (m^3) "<< endl;
}else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}
 void calculatePrismProperties() {
    //	system("ClS");
    cout<<"\t\t\t\t\t--------------------------------";
    cout<<"\n\t\t\t\t\t-  Calculation of Prism      -";
    cout<<"\n\t\t\t\t\t--------------------------------\n";
    cout<< "\n\t\t\t\t\tChoose a calculation:";
	cout<< "\n\n\t\t\t\t\t1. Surface  Area";
	cout<< "\n\n\t\t\t\t\t2. Volume  ";
	cout<< "\n\n\t\t\t\t\tEnter your choice:";
	
    int calculationChoice;
    cout<<" ";cin >> calculationChoice;
    
    if (calculationChoice == 1) {
    	double baseArea, perimeter, height;

    // Get input for base area, perimeter, and height from the user
    cout << "\n\t\t\t\t\tEnter the area of the base: ";
    cin >> baseArea;

    cout << "\n\t\t\t\t\tEnter the perimeter of the base: ";
    cin >> perimeter;

    cout << "\n\t\t\t\t\tEnter the height of the prism: ";
    cin >> height;

    // Calculate the surface area using the formula A = 2B + Ph
    double surfaceArea = 2 * baseArea + perimeter * height;

    // Display the result
    cout << "\n\t\t\t\t\tThe surface area of the prism is: " << surfaceArea << " (m^2) " << endl;
}
   else  if (calculationChoice == 2) {
    	 double length, width, height;

    // Get input for length, width, and height from the user
    cout << "\n\t\t\t\t\tEnter the length of the base: ";
    cin >> length;

    cout << "\n\t\t\t\t\tEnter the width of the base: ";
    cin >> width;

    cout << "\n\t\t\t\t\tEnter the height of the prism: ";
    cin >> height;

    // Calculate the area of the base
    double baseArea = length * width;

    // Calculate the volume using the formula V = Bh
    double volume = baseArea * height;

    // Display the result
    cout << "\n\t\t\t\t\tThe volume of the prism is: " << volume << " (m^3) " << endl;
}else {
        cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    }
}
int main() {
	
	// E for background Color(Light Yellow) 
    // 4 for text color(Red) 
    //system("Color E4");
    system("Color 0A");
	
	system("CLS");
	cout<<"\t\t\t\t\t-------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t- Welcome to the Geometric Calculator!    -"<<endl;
    cout<<"\t\t\t\t\t-------------------------------------------"<<endl;
    char continueChoice;
    do {
    	
    	cout<<endl;
        cout << "\t\t\t\t\tChoose the type of shapes to calculate:";
		cout<<"\n\t\t\t\t\n\t\t\t\t\t\t\t1.2D  2.3D";
		cout<<"\n\n\t\t\t\t\tEnter your choice: "<<endl;
        int dimensionChoice;
        start:
        cout<<"\n\t\t\t\t\t";cin >> dimensionChoice; 
       
        

        if (dimensionChoice == 1) {
        	system("CLS");
        	cout<<"\n\t\t\t\t\t----------------------------------";
            cout<<"\n\t\t\t\t\t-        List of 2D Shapes       -";
            cout<<"\n\t\t\t\t\t----------------------------------";
            cout<<endl;
			cout<<"\n\t\t\t\t\t1. Circle";
			cout<<"\n\t\t\t\t\t2. Square";
			cout<<"\n\t\t\t\t\t3. Triangle";
			cout<<"\n\t\t\t\t\t4. Rectangle";
			cout<<"\n\t\t\t\t\t5. Parallelogram";
			cout<<"\n\t\t\t\t\t6. Trapezoid ";
			cout<<"\n\t\t\t\t\t7. Hexagon";
			cout<<"\n\n\t\t\t\t\tEnter your choice: ";
            int shape2DChoice;
            st1:
            cin >> shape2DChoice;

            switch (shape2DChoice) {
                case 1:
                	drawCircle();
                    calculateCircleProperties();
                    break;
                case 2:
                	drawSquare();
                    calculateSquareProperties();
                    break;
                case 3:
                	drawTriangle();
                    calculateTriangleProperties();
                    break;
                case 4:
                	drawRectangle();
                    calculateRectangleProperties();
                    break;
                case 5:
                	drawParallelogram();
                    calculateParallelogramProperties();
                    break;
                case 6:
                	drawTrapezoid();
                    calculateTrapezoidProperties();
                    break;
                case 7:
                	drawHexagon();
                    calculateHexagonProperties();
                    break;
                default:
    cout<<endl;
    cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    cout<<" \t\t\t\t\tPlease Select Option From the List!! ";
                goto st1;
                    break;
            }
        } else if (dimensionChoice == 2) {
        	system("CLS");
            cout<<"\n\t\t\t\t\t----------------------------------";
            cout<<"\n\t\t\t\t\t-        List of 3D Shapes       -";
            cout<<"\n\t\t\t\t\t----------------------------------";
			cout<<"\n\n\t\t\t\t\t1. Sphere";
			cout<<"\n\t\t\t\t\t2. Cube";
			cout<<"\n\t\t\t\t\t3. Cylinder";
			cout<<"\n\t\t\t\t\t4. Cone";
			cout<<"\n\t\t\t\t\t5. Cuboid";
			cout<<"\n\t\t\t\t\t6. Pyramid";
			cout<<"\n\t\t\t\t\t7. Prism";
			cout<<"\n\n\t\t\t\t\tEnter your choice: ";
            int shape3DChoice;
            st2:
            cin >> shape3DChoice;

            switch (shape3DChoice) {
                case 1:
                	drawSphere();
                    calculateSphereProperties();
                    break;
                case 2:
                	drawCube(); 
                    calculateCubeProperties();
                    break;
                case 3:
                	drawCylinder(); 
                    calculateCylinderProperties();
                    break;
                case 4:
                	drawCone();
                    calculateConeProperties();
                    break;
                case 5:
                	drawCuboid();
				    calculateCuboidProperties();
					break;
				case 6:
					drawPyramid();
				    calculatePyramidProperties();
					break;
				case 7:
					drawPrism();
				    calculatePrismProperties();
					break;	    
                default:
    cout << "\n\t\t\t\t\tInvalid choice!" << endl;
    cout<<" \t\t\t\t\tPlease Select Option From the List!! ";
    goto st2;
    break;
            }
        } else {
    cout << "\t\t\t\t\tInvalid choice! " << endl;
    cout<<" \t\t\t\t\tPlease Select Option From the List!! ";
    goto start;
        }
        cout<<endl;
    cout<<"\t\t\t\t\tDo you want to continue? (y/n): ";
    cin >> continueChoice;

    } while (continueChoice == 'y'||continueChoice  =='Y');
    
    system("CLS");
    
    cout<<endl;  
    cout << "Thank you!" << endl;
                     
    return 0;
}

    	 /*
	================================================
	               
				   	For 2D Shapes:
		
	================================================ 
	*/	
// 1. Circle:		
	void drawCircle() {
    cout << "\n\t\t\t\t\t    *****    ";
    cout << "\n\t\t\t\t\t  *       *  ";
    cout << "\n\t\t\t\t\t *         * ";
    cout << "\n\t\t\t\t\t *         * ";
    cout << "\n\t\t\t\t\t  *       *  ";
    cout << "\n\t\t\t\t\t    *****    \n";
} 
//2.Square:
	void drawSquare() {
    cout << "\n\t\t\t\t\t  *************  ";
    cout << "\n\t\t\t\t\t  *           *  ";
    cout << "\n\t\t\t\t\t  *           *  ";
    cout << "\n\t\t\t\t\t  *           *  ";
    cout << "\n\t\t\t\t\t  *           *  ";
    cout << "\n\t\t\t\t\t  *************  \n";
}
	 
//3.Triangle:	 
	void drawTriangle() {
    cout << "\n\t\t\t\t\t      *      ";
    cout << "\n\t\t\t\t\t     * *     ";
    cout << "\n\t\t\t\t\t    *   *    ";
    cout << "\n\t\t\t\t\t   *     *   ";
    cout << "\n\t\t\t\t\t  *********  \n";
}
//4.Rectangle:
	void drawRectangle() {
    cout << "\n\t\t\t\t\t  **********  ";
    cout << "\n\t\t\t\t\t  *        *  ";
    cout << "\n\t\t\t\t\t  *        *  ";
    cout << "\n\t\t\t\t\t  *        *  ";
    cout << "\n\t\t\t\t\t  **********  \n";
}

//5.Parallelogram:
	void drawParallelogram() {
    cout << "\n\t\t\t\t\t     ***********  ";
    cout << "\n\t\t\t\t\t    *         *  ";
    cout << "\n\t\t\t\t\t   *         *   ";
    cout << "\n\t\t\t\t\t  *         *    ";
    cout << "\n\t\t\t\t\t ***********   \n";
}

 //6.Trapezoid:
 	void drawTrapezoid() {
    cout << "\n\t\t\t\t\t   *********   ";
    cout << "\n\t\t\t\t\t  *         *   ";
    cout << "\n\t\t\t\t\t *           *   ";
    cout << "\n\t\t\t\t\t ************** \n";
}

//7.Hexagon:
	void drawHexagon() {
    cout << "\n\t\t\t\t\t   ******    ";
    cout << "\n\t\t\t\t\t  *      *   ";
    cout << "\n\t\t\t\t\t *        *  ";
    cout << "\n\t\t\t\t\t  *      *   ";
    cout << "\n\t\t\t\t\t   ******    \n";
}
    /*
	================================================
	               
				   	For 3D Shapes:
		
	================================================	
	*/	
//1. Cube:               2nd
	void drawCube() {
    cout << "\n\t\t\t\t\t   ________    ";
    cout << "\n\t\t\t\t\t  /       /|   ";
    cout << "\n\t\t\t\t\t /_______/ |   ";
    cout << "\n\t\t\t\t\t |       | |   ";
    cout << "\n\t\t\t\t\t |_______|/    \n";
}

//2. Sphere (Approximation):      1st
	void drawSphere() {
    cout << "\n\t\t\t\t\t     *****    ";
    cout << "\n\t\t\t\t\t   *       *  ";
    cout << "\n\t\t\t\t\t  *         * ";
    cout << "\n\t\t\t\t\t   *       *  ";
    cout << "\n\t\t\t\t\t     *****    \n";
}

//3.Cylinder (Approximation):
	void drawCylinder() {
    cout << "\n\t\t\t\t\t    ______       ";
    cout << "\n\t\t\t\t\t  /        \\    ";
    cout << "\n\t\t\t\t\t |          |    ";
    cout << "\n\t\t\t\t\t |          |   \n";
    cout << "\n\t\t\t\t\t  \\______ /    \n";
}

//4. Cone (Approximation):

	void drawCone() {
    cout << "\n\t\t\t\t\t     /\\     ";
    cout << "\n\t\t\t\t\t    /  \\    ";
    cout << "\n\t\t\t\t\t   /    \\   ";
    cout << "\n\t\t\t\t\t  /______\\  \n";
}

//5.Cuboid:
	void drawCuboid() {
    cout << "\n\t\t\t\t\t   ________    ";
    cout << "\n\t\t\t\t\t  /       /|   ";
    cout << "\n\t\t\t\t\t /_______/ |   ";
    cout << "\n\t\t\t\t\t|       | _|   ";
    cout << "\n\t\t\t\t\t|_______|/    \n";
}

//6.Pyramid (Approximation
	void drawPyramid() {
    cout << "\n\t\t\t\t\t      /\\      ";
    cout << "\n\t\t\t\t\t     /  \\     ";
    cout << "\n\t\t\t\t\t    /    \\    ";
    cout << "\n\t\t\t\t\t   /______\\   \n";
}

//7.Prism:
	void drawPrism() {
    cout << "\n\t\t\t\t\t    ________    ";
    cout << "\n\t\t\t\t\t   /       /|   ";
    cout << "\n\t\t\t\t\t  /_______/ |   ";
    cout << "\n\t\t\t\t\t |       |  |   ";
    cout << "\n\t\t\t\t\t |       |__|   ";
    cout << "\n\t\t\t\t\t |_______|/  \n";
}

