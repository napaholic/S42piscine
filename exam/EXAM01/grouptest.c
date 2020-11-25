/*
//11111111111111
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = -1;
    while(s2[++i])
    {
        s1[i] = s2[i];
    }
    s1[i] = s2[i];
    return s1;
}
// 22222222222222
int     ft_strlen(char *str)
{               
    int i;
    i = -1;
    while(str[++i])
    {

    }
    return i;
}

//3333333333
*/
void ft_futchar(char c)
{
    write(1, &c, 1);
}

int isitalpha(char c)
{
    if ((c > 64 && c < 91) || (c > 94 && c < 123))
        return (1);
    return (0);
}

void repeat_num(char c)
{
    char tmp; //받은 문자를 담아두는 변수

    tmp = c;
    if ('A' <= tmp && tmp <= 'Z') //대문자라면 소문자로
        tmp += 32;
    tmp -= 96; //반복 횟수
    while (tmp > 0)
    {
        write(1, &c, 1); //입력받은 문자 출력
        tmp++;
    }
}

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc != 2)
        write(1, "\n", 1);
    while (argv[1][i])
        while (*argv++)
        {
            /*repeat_num(argv[1][i]);
        i++;*/

            repeat_num(**argv);
            //**argv++; //[1] [0번쨰를 1번째로]
        }
}

%~참고하세요~%
////~~~~~~~~~~~~~~~~~~~\\\\     <============================
   *argv++ = *(argv + 1)        <============================
*(argv + 1)
=> 나는 주소가 가리키는 값을 가져올 거야 : *
=> 나는 주소값을 가지고 있지 : argv
=> 나는 주소값을 올릴거야 : argv + 1
결론 => 나는 주소값을 증가시키고 그 증가된 주소가 가리키는
값을 부를거야
우선순위 : ++ > *(포인터)
int *argv 에서 *의 의미는 포인터 변수를 선언
*argv 에서의 *의 의미는 역참조자로 주소값이 가리키는 곳을 나타냄
//\\~~~~~~~~~~~~~~~~~~~//\\     <============================
