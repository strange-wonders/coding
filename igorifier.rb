#Igorifier-o-matic

print "Thtring pleathe, mathter:"

user_input =  gets.chomp

downflag=false
upflag=false
if user_input.include? "s"
	user_input.gsub!(/s/, "th")
	downflag = true
end
if user_input.include? "S"
	user_input.gsub!(/S/, "Th")
	upflag = true		
end

if downflag = true || upflag=true
	puts "Thank you, mathter. Your thtring ith: #{user_input}"
else
	puts "There ith nothing to change, mathter."
end
