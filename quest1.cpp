#include <vector>

/* O(n^2) solution*/
bool divi12_On2 (const std::vector<int>& v)
{
    // check if the vector contains at least two elements.
    if (v.size() < 2)
    {
        return false;
    }

    for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        for (std::vector<int>::const_iterator j = i + 1; j != v.end(); ++j)
        {
            if (((*i)%12* (*j)%12 )%12==0)
            {
                return true;
            }
        }
    }
    return false;
}

/* O(n) solution*/
int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}


bool divi12_On(const std::vector<int>& v)
{
    // check if the vector contains at least two elements.
    if (v.size() < 2)
    {
        return false;
    }

    //create a list to keep track any remainder that devide 12
    std::vector<bool> seenGcd(13,false);
    for (size_t i = 0; i < v.size(); ++i)
    {
       // The gcd of current number with 12 is keep for now
       int gcdCurrent = gcd(v[i], 12);

       // Check if any of gcd that previously record multiply 
       //with the gcd just found, devisible to 12.
       for (size_t f = 0; f <= 12; ++f )
       {
        if (seenGcd[f] == true && (f*gcdCurrent)%12 == 0)
        {
            return true;
        }
       }

       // Record the current gcd to list seenGcd
        seenGcd[gcdCurrent]=true;
    }
    return false;
}

