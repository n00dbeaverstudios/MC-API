# MC-API

## Marketplace Creators API 

Community-based Epic Marketplace API for Marketplace Creators to share dependencies between plugins and BP projects.

If you want to be a part of this project, request access to this repo and join the Marketplace Creator discord for better communication channels. The more creators who join, the better!  

For fleshing out ideas with others, or to communicate your intentions, create an Issue.

For QoL you must put checks on your functions to warn the end user if the API doesn't have access to the plugin or BP asset, and direct them to the corresponding store page via calling the Notification API on main, which has a button that opens a URL. 

### BRANCHES

#### main - based on 4.25

  This branch contains any universal functions that will be required for your asset to communicate with others, you need to base your branch off this and sync any changes. 
  
  Parent class functions are IMCInterface::
  
  Some examples of what functions "main" includes for all branches to use;
  
  - IMCInterface::StdNotification(Message); (for warning end user)
  - IMCInterface::PluginCheck(); (for checking if the targeted plugin / BP asset is installed)
  - IMCInterface::NotifyStorePage(Message, URL); (calls a notification that contains a button to direct end user to store page)

Some interface functions will require you to fill out the cpp portion of the interface to return specific data that we want to be publicly accessible - by default this will include functions to get the store page URL and custom message from the creator's interface to display in another creator's call of that interface, but is not limited to the base interface class.

  The following examples will require you return your data in the cpp document;

- IMCInterface::GetPluginURL();
- IMCInterface::GetPluginMessage();

#### "name of studio" Branch

If you are a member of this repo, feel free to create your own branch based off "main".
  
  Each of these branches is where you'll find specific API sets that the creator has offered. If you want your asset to communicate with theirs, download the desired API you need from this branch and add it to your project. You will then be able to call functions via their provided API, even if you don't have the paid plugin / BP asset installed. 
  
  Your API for each asset you want communication with should be appending IMCInterface with your asset name, e.g.;
  
   - IMCInterfaceACF::YourAPIFunction();
   - IMCInterfaceInputBuffer::YourAPIFunction();
   - IMCInterfaceN00dFootsteps::YourAPIFunction();
   - IMCInterfaceVoxelPlugin::YourAPIFunction();

etc...

Ideally we should contain all your product API calls in one branch to keep things organised, and so that you can easily keep in sync with upstream. So if you have multiple products, create multiple interfaces within the same branch for each of those relevant assets. 

