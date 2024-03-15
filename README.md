## ROS2 Humble Setup

Recommended OS: Ubuntu 22.04 (Jammy)

### Installation Instructions
Theses steps are from [here](https://docs.ros.org/en/humble/Releases/Release-Humble-Hawksbill.html).

- **Step 1: Set Locale** \
  Make sure you have a locale which supports UTF-8:

```shell
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings
```

- **Step 2: Setup Sources** \
  Need to add the ROS 2 apt repo to system. First ensure Ubuntu Universe repo is enabled:

```shell
sudo apt install software-properties-common
sudo add-apt-repository universe
```

  Now add ROS 2 GPG key with apt:
  
```shell
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```

  Add repo to sources list:
```shell
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

- **Step 3: Install ROS 2 Packages** \
  TODO
  

### MoveIt

(MoveIt Documentation)[https://moveit.picknik.ai/main/index.html]

MoveIt has gravity compensation feature.
