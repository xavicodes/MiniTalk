void transform (char s, int pid)
{
    int bit;

    while(bit< 8)
    {
        if(c & bit << 0x01)
            kill(pid,SIGUSR1);
        else
            kill(pid,SIGUSR2);
        bit++;
    }
    usleep(500); //timeout between signals so it doesnt flood.
}

int main(int argc, char **argv)
{
    int pid;
    if(argc != 3 ||( argv == 2 && argv[2][0] != NULL))
        return(1);
    pid = itoa(argv[1]);
    while(argv[2][i])
    {
    transform(argv[2],pid);
    i++;
    }

}

