#include <iostream>
#include <string>

int main()
{
    /*
    Imagine you have just been hired at a local
    movie theater as a programmer. The manager
    asks that you write a program that calculates
    how much a customer owes based on their age
    and the day of the week. The pricing should be 
    as follows:

    Child (12 and under) = $7.00 for all days
    Senior (60+) = $8.50 for all days
    Adult (Over 12, under 60) = $12.00 Monday - Thursday
    Adult (Over 12, under 60) = $15.00 Friday - Sunday

    Example Terminal:

    Input Age: x
    Input Day of Week: y

    Your ticket costs: $x.xx

    Follow proper programming style practices,
    i.e. error checks, error messages, accurate 
    variable names, etc.
    */

   int age;
   std::string dayOfWeek;

   std::cout << "Input Age:";
   std::cin >> age;
   std::cout << "Input Day of Week:";
   std::cin >> dayOfWeek;

    if(age < 0)
    {
        std::cout << "Error: Age cannot be less than 0" << std::endl;
        return;
    }
    if (dayOfWeek != "Monday" && dayOfWeek != "Tuesday" && dayOfWeek != "Wednesday" && dayOfWeek != "Thursday" && dayOfWeek != "Friday" && dayOfWeek != "Saturday" && dayOfWeek != "Sunday")
    {
        std::cout << "Error: Invalid date" << std::endl;
        return;
    }

    if(age <= 12)
   {
    std::cout << "Your ticket costs: $7.00" << std::endl;
   }
   else if(age >= 60)
   {
    std::cout << "Your ticket costs: $8.50" << std::endl;
   }
   else
   {
        if(dayOfWeek == "Friday" || dayOfWeek == "Saturday" || dayOfWeek == "Sunday")
        {
            std::cout << "Your ticket costs: $15.00" << std::endl;
        }
        else if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday")
        {
            std::cout << "Your ticket costs: $12.00" << std::endl;
        }
        else
        {
            std::cout << "Error invalid day of week entered!" << std::endl;
        }
   }



    return 0;
}
