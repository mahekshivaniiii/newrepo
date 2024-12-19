# for new in new1 new2 
# do
#  echo $new
# done 

for new in x{1..3}
do
   useradd "$new"
done 