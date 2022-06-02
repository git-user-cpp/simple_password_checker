/*
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*function declaration*/
int system_write(int fd, const void *buf, int size);

/*declaration of few strings*/
static const char error_message[] = "Invalid input:\nPlease enter the password\n";
static const char password[] = "Hello";
static const char data[] = "Success!\nThe secret data: <the data was deleted> :)\n";

/*function for calculating the length of the string*/
static int string_length(const char *string)
{
    int i = 0;
    while (string[i])
    {
        i++;
    }

    return i;
}

/*function for comparing two strings*/
static int string_compare(char *string, const char *bufer)
{
    int i = 0;

    /*to check that both lines are the same length*/
    if((string_length(bufer)) == (string_length(string)))
    {
        while (string[i])
        {
            if(string[i] == bufer[i])
            {
                ++i;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        return 0;
    }

    return i;
}

int main(int argc, char **argv)
{
    /*check at least 1 argument exist and check the password correctness*/
    if((argc > 1) && (string_compare(argv[1], password) == 5))
    {
        system_write(1, data, sizeof(data)-1);
        /*
        system_write(1, argv[1], string_length(argv[1]));
        system_write(1, "\n", 1);
        */
    }
    else
    {
        /*error message*/
        system_write(1, error_message, sizeof(error_message)-1);
        return 1;
    }

    return 0;
}