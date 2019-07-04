/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {Platform, StyleSheet, Text, View, Button} from 'react-native';
import {PermissionsAndroid} from 'react-native';
import { RNOkaySdk } from "react-native-okay-sdk";
import firebase from "react-native-firebase";

const instructions = Platform.select({
  ios: 'Press Cmd+R to reload,\n' + 'Cmd+D or shake for dev menu',
  android:
    'Double tap R on your keyboard to reload,\n' +
    'Shake or press menu button for dev menu',
});

type Props = {};
export default class App extends Component<Props> {


  getAllPermissions = async () => {
    try {
      permissions = await RNOkaySdk.permissionRequest();
      if (Platform.OS === "android") {
        const userResponse = await PermissionsAndroid.requestMultiple(permissions);
        return userResponse;
      }
    } catch (err) {
      Warning(err);
    }
    return null;
  }

  componentDidMount() {
    this.getAllPermissions();
    RNOkaySdk.init("http://protdemo.demohoster.com").then(res => {
      console.log(res);
    });
  }

  enrollProcedure = () => {
     const pubPssBase64 =
    "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxgyacF1NNWTA6rzCrtK60se9fVpTPe3HiDjHB7MybJvNdJZIgZbE9k3gQ6cdEYgTOSG823hkJCVHZrcf0/AK7G8Xf/rjhWxccOEXFTg4TQwmhbwys+sY/DmGR8nytlNVbha1DV/qOGcqAkmn9SrqW76KK+EdQFpbiOzw7RRWZuizwY3BqRfQRokr0UBJrJrizbT9ZxiVqGBwUDBQrSpsj3RUuoj90py1E88ExyaHui+jbXNITaPBUFJjbas5OOnSLVz6GrBPOD+x0HozAoYuBdoztPRxpjoNIYvgJ72wZ3kOAVPAFb48UROL7sqK2P/jwhdd02p/MDBZpMl/+BG+qQIDAQAB";
    firebase
    .iid()
    .get()
    .then(instanceID => {
      RNOkaySdk.enrollProcedure({
        SpaEnrollData: {
          host: "http://protdemo.demohoster.com",
          appPns: instanceID,
          pubPss: pubPssBase64,
          pageTheme: null,
          installationId: "9990"
        }
      })
       .then(response => console.log(response))
        .catch(error => console.log(error))
        .catch(error => console.log(error));
    });
  }

  render() {
    return (
      <View style={styles.container}>
        <Text style={styles.welcome}>Welcome to React Native!</Text>
        <Text style={styles.instructions}>To get started, edit App.js</Text>
        <Button title="TEst" onPress={this.enrollProcedure} style={{width: 100, height: 100}}/>
        <Text style={styles.instructions}>{instructions}</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#F5FCFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
});
