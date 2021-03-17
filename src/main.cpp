#include <iostream>

void ReallyBadFunction(bool arg1, bool arg2, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7)
{
	if (arg1)
	{
		if (arg2)
		{
			if (arg3)
			{
				if (arg3)
				{
					if (arg4)
					{
						if (arg5)
						{
							if (arg6)
							{
								if (arg7)
								{
									std::cout << "This is a really bad function!\n."
								}
							}
						}
					}
				}
			}
		}
	}
}

void Main()
{
	std::cout << "Hello world!\n";

	ReallyBadFunction(true, true, true, true, true, true true);
}