#!/bin/bash

g++ -O2 gen.cpp -o gen
g++ -O2 a.cpp -o a 
g++ -O2 brute.cpp -o brute

i=1
max=1000

while [ $i -le $max ]; do  
    echo "Running test $i..."

    ./gen $i > input.txt

    # ---- time a ----
    start_a=$(date +%s%N)
    ./a < input.txt > output_a.txt
    end_a=$(date +%s%N)
    time_a=$(( (end_a - start_a) / 1000000 ))  # ms

    # ---- time brute ----
    start_b=$(date +%s%N)
    ./brute < input.txt > output_b.txt
    end_b=$(date +%s%N)
    time_b=$(( (end_b - start_b) / 1000000 ))  # ms

    if ! diff -w output_a.txt output_b.txt > /dev/null; then
        echo "[FAIL] Mismatch found at test $i!"
        echo
        echo "Input:"
        cat input.txt
        echo
        echo "Your output:"
        cat output_a.txt
        echo
        echo "Expected output:"
        cat output_b.txt
        echo
        break
    else
        echo "Test $i passed | a: ${time_a} ms | brute: ${time_b} ms"
    fi

    ((i++))
done

rm -f gen a brute input.txt output_a.txt output_b.txt


# ---------------------------------------------------------------------------
# chmod +x stress.sh
# ./stress.sh

