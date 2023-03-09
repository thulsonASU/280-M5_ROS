# mycobot_ros
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![All Contributors](https://img.shields.io/badge/all_contributors-17-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->

[![jaywcjlove/sb](https://jaywcjlove.github.io/sb/lang/chinese.svg)](https://docs.elephantrobotics.com/docs/gitbook/12-ApplicationBaseROS/)
[![jaywcjlove/sb](https://jaywcjlove.github.io/sb/lang/english.svg)](https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/)

[中文文档](https://docs.elephantrobotics.com/docs/gitbook/12-ApplicationBaseROS/) | [English Documentation](https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/)

Control or simulate myCobot series robots in ROS.

![Demo](./demo_img/Screenshot-1.png)

**Notes**:

* Make sure that `Atom` is flashed into the top Atom and `Transponder` or `minirobot` is flashed into the base Basic .The tool download address: [https://github.com/elephantrobotics/myCobot/tree/main/Software](https://github.com/elephantrobotics/myCobot/tree/main/Software)
* Supported ROS versions:
   * Ubuntu 16.04 / ROS Kinetic
   * Ubuntu 18.04 / ROS Melodic
   * Ubuntu 20.04 / ROS Noetic

<!-- **If your `Atom` is 2.3 or before, or `pymycobot` is 1.\*, Please check branch [before](https://github.com/elephantrobotics/myCobotRos/tree/before)** -->

## Installation
### Option 1: Docker
There are two ways to run this project. The first is by running the project in a container, and this requires
[installing docker](https://docs.docker.com/engine/install/ubuntu/) and
[installing docker-compose](https://docs.docker.com/compose/install/). The benefit of running in the container is that you can run the project in any version of linux, as long as your kernel
is new enough.

Once docker is installed, run the following command, and the project should show up.

#### Without NVIDIA GPU:

**ROS Noetic**:

```
docker-compose build ros-noetic && xhost +local:root && docker-compose up ros-noetic
```

**ROS Melodic**:

```
docker-compose build ros && xhost +local:root && docker-compose up ros
```

#### With NVIDIA GPU

**ROS Noetic**:

```
docker-compose build nvidia-ros-noetic && xhost +local:root && docker-compose up nvidia-ros-noetic
```

**ROS Melodic**:

```
docker-compose build nvidia-ros && xhost +local:root && docker-compose up nvidia-ros
```

This command does three things:
1) `docker-compose build ros`

   This builds the project in a container. That means nothing is installed on your host machine!
   The first time this runs, this command will take a long while. After running it once, caching
   will allow this command to run quickly.

2) `xhost +local:root`

   This command gives X the ability to display GUI's from within the docker container

3) `docker-compose up ros`

   This runs the image specified in the `docker-compose.yml`, which by default runs
   the command `roslaunch mycobot_320 mycobot_320_slider.launch` within the container.

To run other tutorials, set the LAUNCH_TARGET environment variable. For example, to the run the MoveIt tutorial run:

```
export LAUNCH_TARGET=mycobot_320_moveit mycobot320_moveit.launch
docker-compose up ros
```

### Option 2: Local
#### 2.1 Pre-Requriements

For using this package, the [Python api](https://github.com/elephantrobotics/pymycobot.git) library should be installed first.

```bash
pip install pymycobot --user
```

#### 2.2 Package Download and Install

Install ros package in your src folder of your Catkin workspace.

```bash
$ cd ~/catkin_ws/src
$ git clone --depth 1 https://github.com/elephantrobotics/mycobot_ros.git
$ cd ~/catkin_ws
$ catkin_make
$ source ~/catkin_ws/devel/setup.bash
$ sudo echo 'source ~/catkin_ws/devel/setup.bash' >> ~/.bashrc
```

#### 2.3 Test Python API

```bash
cd ~/catkin_ws/src/mycobot_ros
python test.py
```

## Where to get help

There is documentation in the [ElephantRobotics Docs](https://docs.elephantrobotics.com/docs/gitbook-en/). Please check the ROS chapter.

## Important Links & Docs

* [User Guide](https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/)

## Contributing

Contributions are always welcome!

See [CONTRIBUTING.md](CONTRIBUTING.md) for ways to get started.

Please adhere to this project's [code of conduct](CODE_OF_CONDUCT.md).

## Screenshots

![Demo](./demo_img/Screenshot-2.png)

![Demo](./demo_img/Screenshot-3.png)

![Demo](./demo_img/Screenshot-4.png)

![Demo](./demo_img/Screenshot-5.png)

![Demo](./demo_img/320_slider.png)

![Demo](./demo_img/320_moveit.png)

## Contributors

Thanks goes to these people ([Emoji Key](https://allcontributors.org/docs/en/emoji-key)):
<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tbody>
    <tr>
      <td align="center" valign="top" width="14.28%"><a href="https://www.youtube.com/user/Apockill"><img src="https://avatars.githubusercontent.com/u/1740412?v=4?s=100" width="100px;" alt="Alex Thiele"/><br /><sub><b>Alex Thiele</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=apockill" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/nisshan-x"><img src="https://avatars.githubusercontent.com/u/67353276?v=4?s=100" width="100px;" alt="Shinya Nishimoto"/><br /><sub><b>Shinya Nishimoto</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=nisshan-x" title="Code">💻</a> <a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=nisshan-x" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://www.smilerobotics.com"><img src="https://avatars.githubusercontent.com/u/207142?v=4?s=100" width="100px;" alt="Takashi Ogura"/><br /><sub><b>Takashi Ogura</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=OTL" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/toyoshi"><img src="https://avatars.githubusercontent.com/u/188394?v=4?s=100" width="100px;" alt="Ryuichiro Toyoshi"/><br /><sub><b>Ryuichiro Toyoshi</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=toyoshi" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://ry0.github.io/"><img src="https://avatars.githubusercontent.com/u/8924325?v=4?s=100" width="100px;" alt="Ryo Kabutan"/><br /><sub><b>Ryo Kabutan</b></sub></a><br /><a href="#design-Ry0" title="Design">🎨</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/dieu-detruit"><img src="https://avatars.githubusercontent.com/u/27790373?v=4?s=100" width="100px;" alt="Takafumi Watanabe"/><br /><sub><b>Takafumi Watanabe</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=dieu-detruit" title="Code">💻</a> <a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=dieu-detruit" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/graziegrazie"><img src="https://avatars.githubusercontent.com/u/11900858?v=4?s=100" width="100px;" alt="Yoshiaki Watanabe"/><br /><sub><b>Yoshiaki Watanabe</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=graziegrazie" title="Code">💻</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/mertcookimg"><img src="https://avatars.githubusercontent.com/u/58113372?v=4?s=100" width="100px;" alt="Masato Kobayashi"/><br /><sub><b>Masato Kobayashi</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=mertcookimg" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://profile.tiryoh.com"><img src="https://avatars.githubusercontent.com/u/3256629?v=4?s=100" width="100px;" alt="Daisuke Sato"/><br /><sub><b>Daisuke Sato</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=Tiryoh" title="Documentation">📖</a> <a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=Tiryoh" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://www.eacousineau.com/"><img src="https://avatars.githubusercontent.com/u/2806276?v=4?s=100" width="100px;" alt="Eric Cousineau"/><br /><sub><b>Eric Cousineau</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=eacousineau" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/thandal"><img src="https://avatars.githubusercontent.com/u/2613832?v=4?s=100" width="100px;" alt="thandal"/><br /><sub><b>thandal</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=thandal" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/nakano16180"><img src="https://avatars.githubusercontent.com/u/36945685?v=4?s=100" width="100px;" alt="nakano16180"/><br /><sub><b>nakano16180</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=nakano16180" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://twitter.com/comocc"><img src="https://avatars.githubusercontent.com/u/843396?v=4?s=100" width="100px;" alt="Akihiro Komori"/><br /><sub><b>Akihiro Komori</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=comoc" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/mostlyjason"><img src="https://avatars.githubusercontent.com/u/6370704?v=4?s=100" width="100px;" alt="Jason Skowronski"/><br /><sub><b>Jason Skowronski</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=mostlyjason" title="Code">💻</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="14.28%"><a href="https://github.com/2929ss"><img src="https://avatars.githubusercontent.com/u/51234222?v=4?s=100" width="100px;" alt="2929ss"/><br /><sub><b>2929ss</b></sub></a><br /><a href="https://github.com/elephantrobotics/mycobot_ros/commits?author=2929ss" title="Code">💻</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://medium.com/@tks/takasu-profile-c50feee078ac"><img src="https://avatars.githubusercontent.com/u/1667148?v=4?s=100" width="100px;" alt="TAKASU Masakazu"/><br /><sub><b>TAKASU Masakazu</b></sub></a><br /><a href="#promotion-takasumasakazu" title="Promotion">📣</a></td>
      <td align="center" valign="top" width="14.28%"><a href="https://scrapbox.io/saitotetsuya/"><img src="https://avatars.githubusercontent.com/u/114928?v=4?s=100" width="100px;" alt="SAITO, Tetsuya"/><br /><sub><b>SAITO, Tetsuya</b></sub></a><br /><a href="#promotion-3110" title="Promotion">📣</a></td>
    </tr>
  </tbody>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->

This project follows the [all-contributors](https://allcontributors.org/)
specification. Contributions of any kind are welcome!

## License

Licensed under standard three-clause BSD license (same as ROS Core), 
Copyright 2020-2023 Elephant Robotics. [Copy of the license](LICENSE).
