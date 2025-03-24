
for((i = 1; ; ++i)); do
    echo $i
    ./gen $i > in.txt
    diff -w <(./a < in.txt) <(./brute < in.txt) || break
done
