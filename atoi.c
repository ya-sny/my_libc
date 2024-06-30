#include "lib.h"

static int	isspace(const char str)
{
	if (str == ' ' || str == '\f' || str == '\n'
		|| str == '\r' || str == '\t' || str == '\v')
		return 1;
	return 0;
}

static long	isoverflow(int neg)
{
	if (neg)
		return LONG_MIN;
	return LONG_MAX;
}

static long	calc(const char *s, int neg, unsigned long cutoff, int cutlim)
{
	unsigned long	acc;
	int				any;
	int				c;

	acc = 0;
	any = 0;
	c = *s++;
	while (isdigit(c))
	{
		c -= '0';
		if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
			any = -1;
		else
		{
			any = 1;
			acc = 10 * acc + c;
		}
		c = *s++;
	}
	if (any < 0)
		acc = isoverflow(neg);
	else if (neg)
		acc = -acc;
	return acc;
}

int	atoi(const char *str)
{
	const char		*s = str;
	unsigned long	cutoff;
	int				cutlim;
	int				neg;

	neg = 0;
	while (isspace(*s))
		s++;
	if (*s == '-')
	{
		neg = 1;
		s++;
	}
	else if (*s == '+')
		s++;
	if (neg)
		cutoff = -(unsigned long)LONG_MIN;
	else
		cutoff = LONG_MAX;
	cutlim = cutoff % 10;
	cutoff /= 10;
	return (int)ft_calc(s, neg, cutoff, cutlim);
}
