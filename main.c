#include <stdio.h>

#define mu_assert(message, test) \
    do                           \
    {                            \
        if (!(test))             \
            return message;      \
    } while (0)


#define mu_run_test(test)       \
    do                          \
    {                           \
        const char *message = test(); \
        tests_run++;            \
        if (message)            \
            return message;     \
    } while (0)

int tests_run = 0;

int carre(int a)
{
    return a * a;
}

const char *categorize_age(int age)
{

    if (age < 0)
    {
        return "Invalid age";
    }
    else if (age < 13)
    {
        return "Child";
    }
    else if (age < 20)
    {
        return "Teenager";
    }
    else if (age < 65)
    {
        return "Adult";
    }
    else
    {
        return "Senior";
    }
}

const char *test_carre_positif()
{
    int c = carre(3);
    mu_assert(" Assert failed : le carre de 3 est 9 \n", c == 3 * 3);
    return 0;
}

const char *test_carre_negatif()
{
    int c = carre(-5);
    mu_assert(" Assert failed : le carre de -5 est 25 \n", c == 25);
    return 0;
}

const char *test_carre_0()
{
    int c = carre(0);
    mu_assert(" Assert failed : le carre de 0 est 0", c == 0);
    return 0;
}

const char *test_age_ne() 
{
    const char* age = categorize_age(-1);
    mu_assert(" Assert failed : l'age de la personne est invalide \n", age == "Invalid age");
    return 0;

}

const char *test_age_child() 
{
    const char* age = categorize_age(10);
    mu_assert(" Assert failed : l'age de la personne est child \n", age == "Child");
    return 0;

}

const char *test_age_teenager() 
{
    const char* age = categorize_age(17);
    mu_assert(" Assert failed : l'age de la personne est teenager \n", age == "Teenager");
    return 0;

}

const char *test_age_adult() 
{
    const char* age = categorize_age(25);
    mu_assert(" Assert failed : l'age de la personne est adult \n", age == "Adult");
    return 0;
    
}

const char *test_age_senior() 
{
    const char* age = categorize_age(80);
    mu_assert(" Assert failed : l'age de la personne est senior \n", age == "Senior");
    return 0;
    
}


static const char *all_tests()
{
    mu_run_test(test_carre_positif);
    mu_run_test(test_carre_negatif);
    mu_run_test(test_carre_0);
    mu_run_test(test_age_ne);
    mu_run_test(test_age_child);
    mu_run_test(test_age_adult);
    mu_run_test(test_age_senior);

    return 0;
}


int main()
{
    const char *result = all_tests();
    if (result != 0)
    {
        printf(" %s \n", result);
    }
    else
    {
        printf(" All tests passed ! \n");
    }
    printf(" Test run : %d \n", tests_run);

    return 0;
}