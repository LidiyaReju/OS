echo "Simple Calculator"
echo "Enter two numbers"
read x
read y
echo  -e "1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n"
read ch
case $ch in
1)sum=$(($x+$y))
echo "The Sum is $sum";;
2)diff=$(($x-$y))
echo "The difference is $diff";;
3)multi=$(($x*$y))
echo "The Product is $multi";;
4)div=$(($x/$y))
echo "The Quotient is $div";;
*)echo "Invalid choice";;
esac





