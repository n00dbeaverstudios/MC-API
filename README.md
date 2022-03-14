# MC-API
Community-based Epic Marketplace API for Marketplace Creators to share dependencies between plugins and BP projects.

If you want to be a part of this project, request access to this repo and join the Marketplace Creator discord for better communication channels. The more creators who join, the better!  

For fleshing out ideas with others, or to communicate your intentions, create an Issue.

For QoL you must put checks on your functions to warn the end user if the API doesn't have access to the plugin or BP asset, and direct them to the corresponding store page via calling the Notification API on main, which has a button that opens a URL. 

### BRANCHES

#### main 

  This branch contains any universal functions that will be required for your asset to communicate with others, you need to base your branch off this. 

#### "name of studio" Branch
  
  This is where you'll find specific API sets that the creator has offered. If you want your asset to communicate with theirs, download the desired API you need from this branch and add it to your project. You will then be able to call functions via their provided API, even if you don't have their plugin / BP asset installed. 
