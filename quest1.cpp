#include <vector>

// O(n)
bool divi12_On (const std::vector<int>& v)
{
    for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        for (std::vector<int>::const_iterator j = i + 1; j != v.end(); ++j)
        {
            if (*(i)%12 && *(j)%12==0  ||   ((*i)*(*j))%12==0)
            {
                return true;
            }
        }
    }
    return false;
}