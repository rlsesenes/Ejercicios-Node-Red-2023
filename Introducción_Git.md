# Control de Versiones de Git 

Se debe seguir el procedimiento descrito en elsiguiente enlace [Link](https://edu.codigoiot.com/mod/lesson/view.php?id=3857&forceview=1)
   
1. Primero se abre terminal y se actualiza la lista de paquetes con 

        sudo apt update 

2. Posteriormente se instala Git con 

        sudo apt install git 
3. Se deben verificar las versiones de Git con 

        git -version 
4. Se procede a configurar git empleando el siguiente comando 
   
        git config --global user.name "Tu Nombre"

        git config --global user.email "tu.email@example.com"

Una vez configurado Git se crea un repositorio siguiendo los pasos en este  [link](https://edu.codigoiot.com/mod/lesson/view.php?id=3858&forceview=1)

1- Te ubicas en la carpeta de trabajo con cd 

2. Se crea el directorio como 

        mkdir [nombre del arvhivo a crear]

3. Posicionarse dentro de la carpeta creada con 
   
        cd [nombre de archivo creado]

4. se crea un carpeta mas dentro de la carpeta con 

        mkdir ejercicio-git

5. Entrar a la carpeta creada con 


        cd ejercicio-git

6. Realizar el commit creando un archivo 


        echo "Mi primer commit" > hello-world.txt

7. Se inicializa el repositorio con 

        git init

8. Se comprueba el estado del repositorio con 

        git status 

9. Se agrega el archivo creado con 

        git add . 


9. Se verifica nuevamente el status y se realiza el commit en el repositorio local 

        git status
        git commit -m "Mi primer commit en Git"
C
Con esto es posible realizar los commits con terminal 


