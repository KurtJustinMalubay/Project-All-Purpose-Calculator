#include <stdio.h>
#include <math.h>

int main()
{
    int mode;
    // Basic Unit Conversion
    double ft, meters, in, cm, sqft, sqmt, acres, cft, cmeters, pounds, kg, kp, ce, f;
    // Architecture Math
    double length, width, area, base, height, radius, perimeter, a, b, c, circumference, volume;
    const double pi = 3.14159265;
    // basic calculator
    char operator;
    double num1, num2, answer;
    int rem1, rem2, rem;

    printf("(1) Basic Unit Conversion\n(2) Architecture Math\n(3) Normal Calculator\n\nInput answer here: ");
    scanf("%d", &mode);
    switch (mode)
    {
    case 1:
        printf("\n\nBasic Unit Conversion\n");
        printf("(1) Length\n(2) Area\n(3) Volume\n(4) Mass\n(5) Pressure\n(6) Temperature\n\nInput answer here: ");
        scanf("%d", &mode);
        switch (mode)
        {
        case 1:
            printf("\n\nLength\n");
            printf("(1) Feet to Meters\n(2) Meters to Feet\n(3) Inches to Centimeters\n(4) Centimeters to Inches\n\nInput answer here: ");
            scanf("%d", &mode);
            switch (mode)
            {
            case 1:
                printf("\n\nFeet to Meters\n");
                printf("Enter Feet: ");
                scanf("%lf", &ft);
                ft *= 0.3048;
                printf("The answer is %lf Meters", ft);
                break;
            case 2:
                printf("\n\nMeters to Feet\n");
                printf("Enter Meters: ");
                scanf("%lf", &meters);
                meters *= 3.281;
                printf("The answer is %.2f Feet", meters);
                break;
            case 3:
                printf("\n\nInches to Centimeters\n");
                printf("Enter Inches: ");
                scanf("%lf", &in);
                in *= 2.54;
                printf("The answer is %lf Centimeters", in);
                break;
            case 4:
                printf("\n\nCentimeter to Inches\n");
                printf("Enter Centimeters: ");
                scanf("%lf", &cm);
                cm *= 0.3937;
                printf("The answer is %lf Inches", cm);
                break;
            default:
                printf("Error! Incorrect input");
            }
            break;
        case 2:
            printf("\n\nArea\n");
            printf("(1) Square Feet to Square Meters\n(2) Square Meters to Square Feet\n(3) Acres to Square Meters\n(4) Square Meters to Acres\n\nInput answer here: ");
            scanf("%d", &mode);
            switch (mode)
            {
            case 1:
                printf("\n\nSquare Feet to Square Meters\n");
                printf("Enter Square Feet: ");
                scanf("%lf", &sqft);
                sqft *= 0.0929;
                printf("The answer is %lf square meters", sqft);
                break;
            case 2:
                printf("\n\nSquare Meters to Square Feet\n");
                printf("Enter Square Meters: ");
                scanf("%lf", &sqmt);
                sqmt *= 10.764;
                printf("The answer is %lf square feet", sqmt);
                break;
            case 3:
                printf("\n\nAcres to Square Meters\n");
                printf("Enter Acres: ");
                scanf("%lf", &acres);
                acres *= 4046.86;
                printf("The answer is %lf Square Meters", acres);
                break;
            case 4:
                printf("\n\nSquare Meters to Acres\n");
                printf("Enter Square Meters: ");
                scanf("%lf", &sqmt);
                sqmt *= 0.000247;
                printf("The answer is %lf acres", sqmt);
                break;
            default:
                printf("Error! Incorrect input");
            }
            break;
        case 3:
            printf("\n\nVolume\n");
            printf("(1) Cubic Feet to Cubic Meters\n(2) Cubic Meters to Cubic Feet\n\nInput answer here: ");
            scanf("%d", &mode);
            switch (mode)
            {
            case 1:
                printf("\n\nCubic Feet to Cubic Meters\n");
                printf("Enter Cubic Feet: ");
                scanf("%lf", &cft);
                cft *= 0.0283;
                printf("The answer is %lf cubic meters", cft);
                break;
            case 2:
                printf("\n\nCubic Meters to Cubic Feet\n");
                printf("Enter Cubic Meters");
                scanf("%lf", &cmeters);
                cmeters *= 35.314;
                printf("The answer is %lf cubic feet", cmeters);
                break;
            default:
                printf("Error! Incorrect input");
            }
            break;
        case 4:
            printf("\n\nMass\n");
            printf("(1) Pounds to Kilograms\n(2) Kilograms to Pounds\n\nInput answer here: ");
            scanf("%d", &mode);
            switch (mode)
            {
            case 1:
                printf("\n\nPounds to Kilograms\n");
                printf("Enter Pounds: ");
                scanf("%lf", &pounds);
                pounds *= 0.4536;
                printf("The answer is %lf kg", pounds);
                break;
            case 2:
                printf("\n\nKilograms to Pounds\n");
                printf("Enter Kilograms: ");
                scanf("%lf", &kg);
                kg *= 2.205;
                printf("The answer is %lf kilograms", kg);
                break;
            default:
                printf("Error! Incorrect input");
            }
            break;
        case 5:
            printf("\n\nPressure\n");
            printf("(1) Pounds per Square Inch to Kilopascals\n(2) Kilopascals to Pounds per Square Inch\n\nInput answer here: ");
            scanf("%d", &mode);
            switch (mode)
            {
            case 1:
                printf("\n\nPounds per Square Inch to Kilopascals\n");
                printf("Enter Pounds per Square Inch: ");
                scanf("%lf", &pounds);
                pounds *= 6.894;
                printf("The answer is %lf kilopascals", pounds);
                break;
            case 2:
                printf("\n\nKilopascals to Pounds per Square Inch");
                printf("Enter Kilopascals: ");
                scanf("%lf", &kp);
                kp *= 0.145;
                printf("The answer is %lf pounds per square inch", kp);
                break;
            default:
                printf("Error! Incorrect input");
            }
            break;
        case 6:
            printf("\n\nTemperature\n");
            printf("(1) Celcius to Fahrenheit\n(2) Fahrenheit to Celcius\n\nInput answer here: ");
            scanf("%d", &mode);
            switch (mode)
            {
            case 1:
                printf("\n\nCelcius to Fahrenheit\n");
                printf("Enter Celcius: ");
                scanf("%lf", &ce);
                ce = ce * 9 / 5 + 32;
                printf("The answer is %lf fahrenheit", ce);
                break;
            case 2:
                printf("\n\nFahrenheit to Celcius\n");
                printf("Enter Fahrenheit: ");
                scanf("%lf", &f);
                f = 26 * 9 / 5 + 32;
                printf("The answer is %lf celcius", f);
                break;
            default:
                printf("Error! Incorrect input");
            }
            break;

        default:
            printf("Error! Incorrect input");
        }
        break;
    case 2:
        printf("\n\nArchitecture Math\n");
        printf("(1) Get the Area of a Rectangle\n(2) Get the Area of a Triangle\n(3) Get the Area of a Circle\n(4) Get the Perimeter of a Rectangle\n(5) Get the Perimeter of a Triangle\n(6) Get the Circumference of a Circle\n(7) Get the Volume of a Rectangular Prism\n(8) Get the Volume of a Cylinder\n(9) Get the Volume of a Sphere\n(10) Get the Volume of a Pyramid\n(11) Solve for Pythagorean Theorem\n(12) Find the Slope of a Line\n\nInput answer here: ");
        scanf("%d", &mode);
        switch (mode)
        {
        case 1:
            printf("\n\nGet the Area of a Rectangle\n");
            printf("Enter length: ");
            scanf("%lf", &length);
            printf("Enter width: ");
            scanf("%lf", &width);
            area = length * width;
            printf("The area of the rectangle is %lf", area);
            break;
        case 2:
            printf("\n\nGet the Area of a Triangle\n");
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter height: ");
            scanf("%lf", &height);
            area = base * height * 1 / 2;
            printf("The area of the triangle is %lf", area);
            break;
        case 3:
            printf("\n\nGet the Area of a Circle\n");
            printf("Enter radius: ");
            scanf("%lf", &radius);
            area = pi * (radius * radius);
            printf("The area of the circle is %lf", area);
            break;
        case 4:
            printf("\n\nGet the Perimeter of a Rectangle\n");
            printf("Enter length: ");
            scanf("%lf", &length);
            printf("Enter width: ");
            scanf("%lf", &width);
            perimeter = 2 * (length + width);
            printf("The perimeter of the rectangle is %lf", perimeter);
            break;
        case 5:
            printf("\n\nGet the Perimeter of a Triangle\n");
            printf("Enter side a: ");
            scanf("%lf", &a);
            printf("Enter side b: ");
            scanf("%lf", &b);
            printf("Enter side c: ");
            scanf("%lf", &c);
            perimeter = a + b + c;
            printf("The perimeter of the triangle is %lf", perimeter);
            break;
        case 6:
            printf("\n\nGet the Circumference of a Circle\n");
            printf("Enter radius: ");
            scanf("%lf", &radius);
            circumference = 2 * pi * radius;
            printf("The circumference of the circle is %lf", circumference);
            break;
        case 7:
            printf("\n\nGet the Volume of a Rectangular Prism\n");
            printf("Enter length: ");
            scanf("%lf", &length);
            printf("Enter width: ");
            scanf("%lf", &width);
            printf("Enter height: ");
            scanf("%lf", &height);
            volume = length * width * height;
            printf("The volume of the rectangular prism is: %lf", volume);
            break;
        case 8:
            printf("\n\nGet the Volume of a Cylinder\n");
            printf("Enter radius: ");
            scanf("%lf", &radius);
            printf("Enter height: ");
            scanf("%lf", &height);
            volume = pi * (radius * radius) * height;
            printf("The volume of the cylinder is %lf", volume);
            break;
        case 9:
            printf("\n\nGet the Volume of a Sphere\n");
            printf("Enter radius: ");
            scanf("%lf", &radius);
            volume = (4 / 3) * pi * (radius * radius * radius);
            printf("The volume of the sphere is %lf", volume);
            break;
        case 10:
            printf("\n\nGet the Volume of a Pyramid\n");
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter height: ");
            scanf("%lf", &height);
            volume = base * height * 1 / 3;
            printf("The volume of the pyramid is %lf", volume);
            break;
        case 11:
            printf("\n\nSolve for Pythagorean Theorem\n");
            printf("Enter a: ");
            scanf("%lf", &a);
            printf("Enter b: ");
            scanf("%lf", &b);
            c = (a * a) + (b * b);
            c = sqrtf(c);
            printf("The answer is %lf", c);
            break;
        case 12:
            printf("\n\nFind the Slope of a Line\n");
            printf("Enter x1: ");
            double x1;
            scanf("%lf", &x1);
            printf("Enter x2: ");
            double x2;
            scanf("%lf", &x2);
            printf("Enter y1: ");
            double y1;
            scanf("%lf", &y1);
            printf("Enter y2: ");
            double y2;
            scanf("%lf", &y2);
            double m;
            m = (y2 - y1) / (x2 - x1);
            printf("The slope of the line is %lf", m);
            break;

        default:
            printf("Error! Incorrect input");
        }
        break;
    case 3:
        printf("\n\nChoose your operator:\nAddition (+)\nSubtraction (-)\nMultiplication (*)\nDivision (/)\n\nEnter operator here: ");
        scanf("%s", &operator);
        switch (operator)
        {
        case '+':
            printf("Enter a: ");
            scanf("%lf", &num1);
            printf("Enter b: ");
            scanf("%lf", &num2);
            answer = num1 + num2;
            printf("\nThe sum of the two values is: %lf", answer);
            break;
        case '-':
            printf("Enter a: ");
            scanf("%lf", &num1);
            printf("Enter b: ");
            scanf("%lf", &num2);
            answer = num1 - num2;
            printf("\nThe difference between the two values is: %lf", answer);
            break;
        case '*':
            printf("Enter a: ");
            scanf("%lf", &num1);
            printf("Enter b: ");
            scanf("%lf", &num2);
            answer = num1 * num2;
            printf("\nThe product of the two values is %lf", answer);
            break;
        case '/':
            printf("Enter a: ");
            scanf("%lf", &num1);
            printf("Enter b: ");
            scanf("%lf", &num2);
            answer = num1 / num2;
            printf("\nThe quotient of the two values is %lf", answer);
            break;
        }
        break;
    default:
        printf("Error! Incorrect input");
    }

    return 0;
}