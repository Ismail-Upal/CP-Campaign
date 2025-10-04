.model small
.stack 100h

.data
    n1 db ?
    n2 db ?

.code
main proc
    mov ax, @data
    mov ds, ax


    mov ah, 1
    int 21h
    sub al, '0'
    mov n1, al

    mov ah, 1
    int 21h
    sub al, '0'           
    mov n2, al

    mov ah, 2
    mov dl, 13
    int 21h
    mov dl, 10
    int 21h

    mov ah, 2
    mov dl, n1
    int 21h

    mov ah, 2
    mov dl, '+'
    int 21h

    mov ah, 2
    mov dl, n2
    int 21h

    mov ah, 2
    mov dl, '='
    int 21h

    mov dl, n1
    add dl, n2
    add dl, '0'
    mov ah, 2
    int 21h


    mov ax, 4ch
    int 21h

main endp
end main