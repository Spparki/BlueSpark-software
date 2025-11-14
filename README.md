# BlueSpark AUV software created by KN SPA i BLSPS science club on WUT and University of Warsaw

## Running Ardusub SITL + Gazebo simulation on your computer
NOTICE: This simulation is based on Blue simulation created by Robotic-Decision-Making-Lab https://github.com/Robotic-Decision-Making-Lab/blue
It has been slightly upgraded and adjusted to the needs of KN SPA i BLSPS.
### Instruction of running bluespark-software package on your computer:
1. Download the image using: docker pull ghcr.io/spparki/bluespark-software:latest
2. Create a docker-compose.yaml file with this pattern:
    version: "3.8"
  
    services:
      bluespark_sim:
        image: ghcr.io/spparki/bluespark-software:latest
        container_name: bluespark_sim
        environment:
          - DISPLAY=${DISPLAY}                  # Allows GUI to show
          - QT_X11_NO_MITSHM=1                  # Fixes Qt shared memory issues
        volumes:
          - /tmp/.X11-unix:/tmp/.X11-unix:rw    # X11 socket for GUI
        runtime: nvidia                         # Use NVIDIA runtime
        deploy:
          resources:
            reservations:
              devices:
                - driver: nvidia
                  count: all
                  capabilities: [gpu]
        stdin_open: true                         # Keep stdin open for terminal
        tty: true                                # Allocate a pseudo-TTY

  --------------------------------------------------------------------------------------------------------------
  A) Note that its important if you use GPU or CPU. It has to be declared in docker-compose.yaml. 
  B) The file above works on linux installed natively. For docker-compose.yaml for WSL2 on Windows go to the fixed-blue branch of this repository. 

3. Compose the container with: docker-compose up
4. Useful commands:
     a) docker ps -a - shows all images on your computer
     b) docker exec -it <name of container> /bin/bash - opens a terminal in home directory (or another specified) of container
     c) docker stop <name of container> - stops container
     d) docker start -ai <name of container> - starts a container 
