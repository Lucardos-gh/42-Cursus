void param(char comparar, va_list param)
{
    if (param == "d")
        print_int(va_arg(param, int))
}