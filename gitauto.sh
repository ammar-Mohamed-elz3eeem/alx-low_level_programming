if [ "$1" = "" ]; then
    echo "you didn't specify path to push"
fi

if [ "$2" = "" ]; then
    echo "you didn't entered commit message"
fi

sudo git add $1

sudo git commit -m "$2"

sudo git push
