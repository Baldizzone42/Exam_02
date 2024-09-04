int	ft_atoi(const char *str)
{
    int sign;
    int result;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13 ))
        str++;
    if (*str == '-' || *str == '+')
        str++;
    if (*str == '-')
        sign = -1;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return(result * sign);
}