
# react-native-blue-beacon

## Getting started

`$ npm install react-native-blue-beacon --save`

### Mostly automatic installation

`$ react-native link react-native-blue-beacon`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-blue-beacon` and add `RNBlueBeacon.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNBlueBeacon.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNBlueBeaconPackage;` to the imports at the top of the file
  - Add `new RNBlueBeaconPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-blue-beacon'
  	project(':react-native-blue-beacon').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-blue-beacon/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-blue-beacon')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNBlueBeacon.sln` in `node_modules/react-native-blue-beacon/windows/RNBlueBeacon.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Blue.Beacon.RNBlueBeacon;` to the usings at the top of the file
  - Add `new RNBlueBeaconPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNBlueBeacon from 'react-native-blue-beacon';

// TODO: What to do with the module?
RNBlueBeacon;
```
  