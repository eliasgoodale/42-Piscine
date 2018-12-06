#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
    int words;
    int i;
    char tmp[1000];
    i = 0;
    words = 0;    
    while (str[i] == ' ')
        i++;
    while(str[i])
    {
        if(str[i] == ' ')
        {
            words++;
            while(str[i] == ' ')
                i++;        
        }
        i++;
    }
    return(words + 1);
}

int 	trim_whitespace(char* str, int pos)
{
	while(str[pos] == ' ')
		pos++;
	return(pos);
}

void    alloc_words(char** arr, char *adj_str, int *letters,int  *curr_word)
{
    int j;
    int l = *letters;
    int cw = *curr_word;
    arr[cw] =(char*)malloc((l + 1)  * sizeof(char));
    j = 0;
    while(l > 0)
    { 
        arr[cw][j] = adj_str[j];    
        j++;
        l--;
    }
    arr[cw][j] = '\0';
    cw++;
    l = 0;
    *curr_word = cw;
    *letters = l;

}

char    **ft_split_whitespaces(char *str)
{
    int letter_start;
    int pos;
    int words;
    int letters;
    char **arr;
    int curr_word;

    words = count_words(str);
    arr = (char**)malloc((words + 1) * sizeof(char*));
    curr_word = 0;
    letters = 0;
    pos = 0;
    pos = trim_whitespace(&str[pos], pos);    
    while(curr_word <  words)
        { 
            if(str[pos] == ' ' || str[pos] == '\0')
            {    
                letter_start = pos - letters;
                alloc_words(arr, &str[letter_start], &letters, &curr_word);
                pos = trim_whitespace(str, pos);                 
            }
            letters++;
            pos++;
        }
        arr[words] = 0;
        return(arr);
}    
    
int main()
{
    char *string = "   How Do Print";
	char **strarr = ft_split_whitespaces(string);
 	char *string1 = "  w hyw      how it sucks";
 	char **strarr2 = ft_split_whitespaces(string1);


}