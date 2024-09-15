#include <stdio.h>
#include <math.h>

int main()
{
    int mode;
    int mode2;
    const double pi = 3.14159265;

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
                double ft;
                scanf("%lf", &ft);
                ft *= 0.3048;
                printf("The answer is %lf Meters", ft);
                break;

            case 2:
                printf("\n\nMeters to Feet\n");
                printf("Enter Meters: ");
                double meters;
                scanf("%lf", &meters);
                meters *= 3.281;
                printf("The answer is %.2f Feet", meters);
                break;

            case 3:
                printf("\n\nInches to Centimeters\n");
                printf("Enter Inches: ");
                double in;
                scanf("%lf", &in);
                in *= 2.54;
                printf("The answer is %lf Centimeters", in);
                break;

            case 4:
                printf("\n\nCentimeter to Inches\n");
                printf("Enter Centimeters: ");
                double cm;
                scanf("%lf", &cm);
                cm *= 0.3937;
                printf("The answer is %lf Inches", cm);
                break;
            }

        case 2:
            printf("\n\nArea\n");

            printf("(1) Square Feet to Square Meters\n(2) Square Meters to Square Feet\n(3) Acres to Square Meters\n(4) Square Meters to Acres\n\nInput answer here: ");
            scanf("%d", &mode);

            switch (mode)
            {
            case 1:
                printf("\n\nSquare Feet to Square Meters\n");
                printf("Enter Square Feet: ");
                double sqft;
                scanf("%lf", &sqft);
                sqft *= 0.0929;
                printf("The answer is %lf square meters", sqft);
                break;

            case 2:
                printf("\n\nSquare Meters to Square Feet\n");
                printf("Enter Square Meters: ");
                double sqmt;
                scanf("%lf", &sqmt);
                sqmt *= 10.764;
                printf("The answer is %lf square feet", sqmt);
                break;

            case 3:
                printf("\n\nAcres to Square Meters\n");
                printf("Enter Acres: ");
                double acres;
                scanf("%lf", &acres);
                acres *= 4046.86;
                printf("The answer is %lf Square Meters", acres);
                break;

            case 4:
                printf("\n\nSquare Meters to Acres\n");
                printf("Enter Square Meters: ");
                double sqm;
                scanf("%lf", &sqm);
                sqm *= 0.000247;
                printf("The answer is %lf acres", sqm);
                break;
            }
            break;

        case 3:
            printf("\n\nVolume\n");
            printf("(1) Cubic Feet to Cubic Meters\n(2) Cubic Meters to Cubic Feet\n\nInput answer here: ");
            int mode;
            scanf("%d", &mode);

            switch (mode)
            {
            case 1:
                printf("\n\nCubic Feet to Cubic Meters\n");
                printf("Enter Cubic Feet: ");
                double cft;
                scanf("%lf", &cft);
                cft *= 0.0283;
                printf("The answer is %lf cubic meters", cft);
                break;

            case 2:
                printf("\n\nCubic Meters to Cubic Feet\n");
                printf("Enter Cubic Meters");
                double cmeters;
                scanf("%lf", &cmeters);
                cmeters *= 35.314;
                printf("The answer is %lf cubic feet", cmeters);
                break;
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
                double pounds;
                scanf("%lf", &pounds);
                pounds *= 0.4536;
                printf("The answer is %lf kg", pounds);
                break;

            case 2:
                printf("\n\nKilograms to Pounds\n");
                printf("Enter Kilograms: ");
                double kg;
                scanf("%lf", &kg);
                kg *= 2.205;
                printf("The answer is %lf kilograms", kg);
                break;
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
                double pounds;
                scanf("%lf", &pounds);
                pounds *= 6.894;
                printf("The answer is %lf kilopascals", pounds);
                break;

            case 2:
                printf("\n\nKilopascals to Pounds per Square Inch");
                printf("Enter Kilopascals: ");
                double kp;
                scanf("%lf", &kp);
                kp *= 0.145;
                printf("The answer is %lf pounds per square inch", kp);
                break;
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
                double c;
                scanf("%lf", &c);
                c = c * 9 / 5 + 32;
                printf("The answer is %lf fahrenheit", c);
                break;

            case 2:
                printf("\n\nFahrenheit to Celcius\n");
                printf("Enter Fahrenheit: ");
                double f;
                scanf("%lf", &f);
                f = 26 * 9 / 5 + 32;
                printf("The answer is %lf celcius", f);
                break;
            }
            break;
        }

    case 2:
        printf("\n\nArea\n");
        printf("(1) Square Feet to Square Meters\n(2) Square Meters to Square Feet\n(3) Acres to Square Meters\n(4) Square Meters to Acres\n\nInput answer here: ");
        scanf("%d", &mode);
        break;

        switch (mode)
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;
        }
    case 3:
        printf("To be made");
        break;

    default:
        printf("Error! Incorrect input");
    }

    return 0;
}