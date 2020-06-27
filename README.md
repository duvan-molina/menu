# Proyecto Menu
## Requisitos
- Necesitas [GIT](https://git-scm.com/) instalado en tu PC.
- Un IDE de c++

## Instalar
- Abra la terminal o consola
- vaya a la `ruta` que desee, ejemplo `cd C:\Users\user\Documents\` para windows y `cd /home/user/documents` para ubuntu
- clone el repositorio: `git clone https://github.com/duvan-molina/menu.git`
- vaya al proyecto `cd menu`

# Antes de hacer los cambios
- antes de hacer los cambios debera crear una nueva rama, cuyo nombre va relacionado con la caracteristica que vayas hacer, ejemplo:  `git checkout -b nombreDeLaRama` donde el `-b` nos ayuda a cambiarnos de una vez a la rama creada, lo puedes comprobar con `git branch`
- el nombre de la rama debe estar relacionado con la función para cargar, por ejemplo, si voy a crear una nueva tarjeta para la sección 3thr, la rama tendría un nombre como `card-3thr-section`.

## Empieza a codear 
  - una vez hecho todo esto puedes empezar a codear, simplemente abres el proyecto en tu editor de codigo de preferencia.
  
## Mandar los cambios

### hacer un commit (despues de hacer un cambio)
- `git add .` para añadir todos los cambios.
- `git commit -m "descripcion breve de lo que hizo"`
- `git push origin nombreDeLaRama` para subir los cambios

 # Bajar los cambios de los compañeros
 
 - si queremos ver los cambios que hicieron los demas tendra que bajar la rama donde esten esos cambios, las ramas se muestran en github
 - para bajar los cambios utilizamos `git pull origin nombreDeLaRama`
