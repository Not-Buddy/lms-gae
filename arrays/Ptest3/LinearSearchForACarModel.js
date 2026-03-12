/**
 * @param {string[]} models
 * @param {string} target
 * @return {string}
 * this platform is broken cpp, c, python and java werent working 
 * so had to switch to js which worked bad cause bad type system
 */
var linearSearch = function(models, target) {

    if (typeof models === "string") {
        models = models.split(",").map(x => x.trim().replace(/['"]/g, ""));
    }

    for (let model of models) {
        if (model === target) return "FOUND";
    }

    return "NOT FOUND";
};
